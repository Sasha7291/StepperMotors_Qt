#include "arduinoserialport.h"

#include <QSerialPortInfo>


ArduinoSerialPort::ArduinoSerialPort(
    const QString &name,
    const quint32 baudRate
)
    : SerialPort(arduinoPortName(name), baudRate)
{}

QString ArduinoSerialPort::arduinoPortName(const QString &name) noexcept
{
    if (isArduinoPort(QSerialPortInfo(name)))
        return name;

    return QString();
}

bool ArduinoSerialPort::isArduinoPort(const QSerialPortInfo &info) noexcept
{
    return info.description().contains("arduino", Qt::CaseInsensitive)
        || info.manufacturer().contains("arduino", Qt::CaseInsensitive);
}
