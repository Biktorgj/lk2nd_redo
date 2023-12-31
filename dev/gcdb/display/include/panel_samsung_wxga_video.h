/* Copyright (c) 2014-2015, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_SAMSUNG_WXGA_VIDEO_H_
#define _PANEL_SAMSUNG_WXGA_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config samsung_wxga_video_panel_data = {
	"qcom,mdss_dsi_samsung_wxga_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, NULL
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution samsung_wxga_video_panel_res = {
	800, 1280, 16, 140, 14, 0, 8, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info samsung_wxga_video_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char samsung_wxga_video_on_cmd0[] = {
	0x03, 0x00, 0x39, 0xC0,
	0xF0, 0x5A, 0x5A, 0xFF,
};

static char samsung_wxga_video_on_cmd1[] = {
	0x03, 0x00, 0x39, 0xC0,
	0xF1, 0x5A, 0x5A, 0xFF,
};

static char samsung_wxga_video_on_cmd2[] = {
	0x03, 0x00, 0x39, 0xC0,
	0xFC, 0xA5, 0xA5, 0xFF,
};

static char samsung_wxga_video_on_cmd3[] = {
	0x03, 0x00, 0x39, 0xC0,
	0xD0, 0x00, 0x10, 0xFF,
};

static char samsung_wxga_video_on_cmd4[] = {
	0x03, 0x00, 0x39, 0xC0,
	0xB1, 0x10, 0xA0, 0xFF,
};

static char samsung_wxga_video_on_cmd5[] = {
	0x04, 0x00, 0x39, 0xC0,
	0xC3, 0x40, 0x00, 0x28,
};

static char samsung_wxga_video_on_cmd6[] = {
	0x36, 0x04, 0x05, 0x80
};

static char samsung_wxga_video_on_cmd7[] = {
	0x07, 0x00, 0x39, 0xC0,
	0xF6, 0x63, 0x20, 0x86,
	0x00, 0x00, 0x10, 0xFF,
};

static char samsung_wxga_video_on_cmd8[] = {
	0x11, 0x00, 0x05, 0x80
};

static char samsung_wxga_video_on_cmd9[] = {
	0x36, 0x00, 0x05, 0x80
};

static char samsung_wxga_video_on_cmd10[] = {
	0x03, 0x00, 0x39, 0xC0,
	0xF0, 0x5A, 0x5A, 0xFF,
};

static char samsung_wxga_video_on_cmd11[] = {
	0x03, 0x00, 0x39, 0xC0,
	0xF1, 0x5A, 0x5A, 0xFF,
};

static char samsung_wxga_video_on_cmd12[] = {
	0x03, 0x00, 0x39, 0xC0,
	0xFC, 0xA5, 0xA5, 0xFF,
};

static char samsung_wxga_video_on_cmd13[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd samsung_wxga_video_on_command[] = {
	{0x8, samsung_wxga_video_on_cmd0, 0x05},
	{0x8, samsung_wxga_video_on_cmd1, 0x05},
	{0x8, samsung_wxga_video_on_cmd2, 0x05},
	{0x8, samsung_wxga_video_on_cmd3, 0x05},
	{0x8, samsung_wxga_video_on_cmd4, 0x05},
	{0x8, samsung_wxga_video_on_cmd5, 0x14},
	{0x4, samsung_wxga_video_on_cmd6, 0x00},
	{0xc, samsung_wxga_video_on_cmd7, 0x00},
	{0x4, samsung_wxga_video_on_cmd8, 0x96},
	{0x4, samsung_wxga_video_on_cmd9, 0x00},
	{0x8, samsung_wxga_video_on_cmd10, 0x05},
	{0x8, samsung_wxga_video_on_cmd11, 0x05},
	{0x8, samsung_wxga_video_on_cmd12, 0x05},
	{0x4, samsung_wxga_video_on_cmd13, 0x32}
};

#define SAMSUNG_WXGA_VIDEO_ON_COMMAND 14


static char samsung_wxga_videooff_cmd0[] = {
	0x28, 0x00, 0x05, 0x80
};

static char samsung_wxga_videooff_cmd1[] = {
	0x04, 0x00, 0x39, 0xC0,
	0xC3, 0x40, 0x00, 0x20,
};

static char samsung_wxga_videooff_cmd2[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd samsung_wxga_video_off_command[] = {
	{0x4, samsung_wxga_videooff_cmd0, 0x32},
	{0x8, samsung_wxga_videooff_cmd1, 0x00},
	{0x4, samsung_wxga_videooff_cmd2, 0x96}
};

#define SAMSUNG_WXGA_VIDEO_OFF_COMMAND 3


static struct command_state samsung_wxga_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info samsung_wxga_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info samsung_wxga_video_video_panel = {
	1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration samsung_wxga_video_lane_config = {
	4, 0, 1, 1, 1, 1, 0
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t samsung_wxga_video_timings[] = {
	0x92, 0x1A, 0x12, 0x00, 0x3E, 0x42, 0x16, 0x1E, 0x14, 0x03, 0x04, 0x00
};

static struct panel_timing samsung_wxga_video_timing_info = {
	0, 4, 0x1E, 0x38
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence samsung_wxga_video_reset_seq = {
	{1, 0, 1, }, {10, 20, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight samsung_wxga_video_backlight = {
	0, 1, 255, 2, 0, "PMIC_8941"
};

#endif /*_PANEL_SAMSUNG_WXGA_VIDEO_H_*/
