#pragma once

#include <QButtonGroup>
#include <QWidget>


class ArduinoMeterDoubleSpinBox;

class DistanceValueWidget final : public QWidget
{
    Q_OBJECT

public:
    explicit DistanceValueWidget(QWidget *parent = nullptr) noexcept;
    ~DistanceValueWidget() noexcept = default;

    [[nodiscard]] double distance() const noexcept;
    void setDistance(const double value) noexcept;

private:
    QButtonGroup buttons_;
    ArduinoMeterDoubleSpinBox *arduinoMeterDoubleSpinBox_;

};
