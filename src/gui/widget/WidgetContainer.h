/*
 * Copyright 2015 Arx Libertatis Team (see the AUTHORS file)
 *
 * This file is part of Arx Libertatis.
 *
 * Arx Libertatis is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Arx Libertatis is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Arx Libertatis.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ARX_GUI_WIDGET_WIDGETCONTAINER_H
#define ARX_GUI_WIDGET_WIDGETCONTAINER_H

#include "gui/widget/Widget.h"

class WidgetContainer
{
public:
	std::vector<Widget *>	vMenuZone;
public:
	WidgetContainer();
	virtual ~WidgetContainer();
	
	void AddZone(Widget * menuZone);
	Widget * CheckZone(const Vec2s & mousePos) const;
	
	Widget * GetZoneNum(size_t index);
	Widget * GetZoneWithID(int zoneId);
	void Move(const Vec2i & offset);
	void DrawZone();
	size_t GetNbZone();
};

#endif // ARX_GUI_WIDGET_WIDGETCONTAINER_H