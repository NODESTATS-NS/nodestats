// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2018-2023 The NodeStats developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SETTINGSNETWORKWIDGET_H
#define SETTINGSNETWORKWIDGET_H

#include <QWidget>
#include <QDataWidgetMapper>
#include "qt/pivx/pwidget.h"

namespace Ui {
class SettingsNetworkWidget;
}

class SettingsNetworkWidget : public PWidget
{
    Q_OBJECT

public:
    explicit SettingsNetworkWidget(PIVXGUI* _window, QWidget *parent = nullptr);
    ~SettingsNetworkWidget();

    void setMapper(QDataWidgetMapper *mapper);

private:
    Ui::SettingsNetworkWidget *ui;

Q_SIGNALS:
    void saveSettings() {};
};

#endif // SETTINGSNETWORKWIDGET_H
