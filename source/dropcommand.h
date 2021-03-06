/****************************************************************************
**
** This file is part of the Qmmander Filemanager.
**
** Copyright (C) Alex Skoruppa 2009-2013
** All rights reserved.
**
** Command for file drop events.
**
** Qmmander is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** Qmmander is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Qmmander.  If not, see <http://www.gnu.org/licenses/>.
**
****************************************************************************/
#ifndef DROPCOMMAND_H
#define DROPCOMMAND_H

#include "command.h"
#include "windows.h"
#include <QtCore>

class DropCommand : public Command
{
public:
   virtual ~DropCommand();
   virtual void execute();

   static DropCommand* dropCommandForActualSelection(QList<QUrl> files, QString to, Qt::DropAction action);

protected:
    DropCommand();

private:
    SHFILEOPSTRUCTW st_;
    TCHAR* sourceFiles_;
    TCHAR* destinationDirectory_;
    TCHAR* destinationFiles_;
};

#endif // DROPCOMMAND_H
