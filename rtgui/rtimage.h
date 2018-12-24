/*
 *  This file is part of RawTherapee.
 *
 *  Copyright (c) 2004-2010 Gabor Horvath <hgabor@rawtherapee.com>
 *
 *  RawTherapee is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  RawTherapee is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with RawTherapee.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include <gtkmm/image.h>

/**
 * @brief A derived class of Gtk::Image in order to handle theme-related icon sets.
 */
class RTImage : public Gtk::Image
{
public:
    RTImage(const Glib::ustring& file_name, const Glib::ustring& rtl_file_name = {});

    void changeImage(const Glib::ustring& image_name);

    static void updateImages();
    static void cleanup();

    static Glib::RefPtr<Gdk::Pixbuf> createFromFile(const Glib::ustring& file_name);
    static Cairo::RefPtr<Cairo::ImageSurface> createFromPng(const Glib::ustring& file_name);
};
