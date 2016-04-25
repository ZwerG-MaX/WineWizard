/***************************************************************************
 *   Copyright (C) 2016 by Vitalii Kachemtsev <LLIAKAJL@yandex.ru>         *
 *                                                                         *
 *   This file is part of Wine Wizard.                                     *
 *                                                                         *
 *   Wine Wizard is free software: you can redistribute it and/or modify   *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   Wine Wizard is distributed in the hope that it will be useful,        *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with Wine Wizard.  If not, see <http://www.gnu.org/licenses/>.  *
 *                                                                         *
 ***************************************************************************/

#ifndef SHORTCUTSDIALOG_H
#define SHORTCUTSDIALOG_H

#include "singletondialog.h"

namespace Ui {
class ShortcutsDialog;
}

class ShortcutsDialog : public SingletonDialog
{
    Q_OBJECT

public:
    explicit ShortcutsDialog(const QString &solution, QWidget *parent = nullptr);
    ~ShortcutsDialog() override;

    QString shortcut() const;

public slots:
    void reject() override;

private slots:
    void on_buttonBox_helpRequested();

private:
    Ui::ShortcutsDialog *ui;
};

#endif // SHORTCUTSDIALOG_H