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

#ifndef _PANEL_HX8279A_WSVGA_VIDEO_H_
#define _PANEL_HX8279A_WSVGA_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config hx8279a_wsvga_video_panel_data = {
	"qcom,mdss_dsi_hx8279a_wsvga_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, NULL
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution hx8279a_wsvga_video_panel_res = {
	600, 1024, 20, 36, 24, 0, 2, 5, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info hx8279a_wsvga_video_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char hx8279a_wsvga_video_on_cmd0[] = {
	0xB0, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd1[] = {
	0xBA, 0xA4, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd2[] = {
	0xBD, 0x71, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd3[] = {
	0xBE, 0x22, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd4[] = {
	0xBF, 0x19, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd5[] = {
	0xC5, 0x05, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd6[] = {
	0xC6, 0x02, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd7[] = {
	0xC7, 0x05, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd8[] = {
	0xC8, 0x03, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd9[] = {
	0xC9, 0x18, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd10[] = {
	0xB0, 0x01, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd11[] = {
	0xB1, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd12[] = {
	0xB2, 0x2c, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd13[] = {
	0xB3, 0x5c, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd14[] = {
	0xB4, 0xac, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd15[] = {
	0xB5, 0xdc, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd16[] = {
	0xB6, 0x5c, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd17[] = {
	0xB7, 0x9C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd18[] = {
	0xB8, 0xCC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd19[] = {
	0xB9, 0x0C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd20[] = {
	0xBA, 0x3C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd21[] = {
	0xBB, 0x6C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd22[] = {
	0xBC, 0x9C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd23[] = {
	0xBD, 0xCC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd24[] = {
	0xBE, 0xFC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd25[] = {
	0xBF, 0x2C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd26[] = {
	0xC0, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd27[] = {
	0xC1, 0xFC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd28[] = {
	0xC2, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd29[] = {
	0xC3, 0x15, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd30[] = {
	0xC4, 0xAA, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd31[] = {
	0xC5, 0xAF, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd32[] = {
	0xC6, 0x03, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd33[] = {
	0xC7, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd34[] = {
	0xC8, 0x2C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd35[] = {
	0xC9, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd36[] = {
	0xCA, 0xAC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd37[] = {
	0xCB, 0xDC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd38[] = {
	0xCC, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd39[] = {
	0xCD, 0x9C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd40[] = {
	0xCE, 0xCC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd41[] = {
	0xCF, 0x0C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd42[] = {
	0xD0, 0x3C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd43[] = {
	0xD1, 0x6C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd44[] = {
	0xD2, 0x9C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd45[] = {
	0xD3, 0xCC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd46[] = {
	0xD4, 0xFC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd47[] = {
	0xD5, 0x2C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd48[] = {
	0xD6, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd49[] = {
	0xD7, 0xFC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd50[] = {
	0xD8, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd51[] = {
	0xD9, 0x15, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd52[] = {
	0xDA, 0xAA, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd53[] = {
	0xDB, 0xAF, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd54[] = {
	0xDC, 0x03, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd55[] = {
	0xDD, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd56[] = {
	0xDE, 0x2C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd57[] = {
	0xDF, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd58[] = {
	0xE0, 0xAC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd59[] = {
	0xE1, 0xDC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd60[] = {
	0xE2, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd61[] = {
	0xE3, 0x9C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd62[] = {
	0xE4, 0xCC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd63[] = {
	0xE5, 0x0C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd64[] = {
	0xE6, 0x3C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd65[] = {
	0xE7, 0x6C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd66[] = {
	0xE8, 0x9C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd67[] = {
	0xE9, 0xCC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd68[] = {
	0xEA, 0xFC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd69[] = {
	0xEB, 0x2C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd70[] = {
	0xEC, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd71[] = {
	0xED, 0xFC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd72[] = {
	0xEE, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd73[] = {
	0xEF, 0x15, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd74[] = {
	0xF0, 0xAA, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd75[] = {
	0xF1, 0xAF, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd76[] = {
	0xF2, 0x03, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd77[] = {
	0xB0, 0x02, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd78[] = {
	0xB1, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd79[] = {
	0xB2, 0x2C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd80[] = {
	0xB3, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd81[] = {
	0xB4, 0xAC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd82[] = {
	0xB5, 0xDC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd83[] = {
	0xB6, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd84[] = {
	0xB7, 0x9C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd85[] = {
	0xB8, 0xCC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd86[] = {
	0xB9, 0x0C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd87[] = {
	0xBA, 0x3C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd88[] = {
	0xBB, 0x6C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd89[] = {
	0xBC, 0x9C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd90[] = {
	0xBD, 0xCC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd91[] = {
	0xBE, 0xFC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd92[] = {
	0xBF, 0x2C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd93[] = {
	0xC0, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd94[] = {
	0xC1, 0xFC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd95[] = {
	0xC2, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd96[] = {
	0xC3, 0x15, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd97[] = {
	0xC4, 0xAA, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd98[] = {
	0xC5, 0xAF, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd99[] = {
	0xC6, 0x03, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd100[] = {
	0xC7, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd101[] = {
	0xC8, 0x2C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd102[] = {
	0xC9, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd103[] = {
	0xCA, 0xAC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd104[] = {
	0xCB, 0xDC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd105[] = {
	0xCC, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd106[] = {
	0xCD, 0x9C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd107[] = {
	0xCE, 0xCC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd108[] = {
	0xCF, 0x0C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd109[] = {
	0xD0, 0x3C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd110[] = {
	0xD1, 0x6C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd111[] = {
	0xD2, 0x9C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd112[] = {
	0xD3, 0xCC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd113[] = {
	0xD4, 0xFC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd114[] = {
	0xD5, 0x2C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd115[] = {
	0xD6, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd116[] = {
	0xD7, 0xFC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd117[] = {
	0xD8, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd118[] = {
	0xD9, 0x15, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd119[] = {
	0xDA, 0xAA, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd120[] = {
	0xDB, 0xAF, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd121[] = {
	0xDC, 0x03, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd122[] = {
	0xDD, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd123[] = {
	0xDE, 0x2C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd124[] = {
	0xDF, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd125[] = {
	0xE0, 0xAC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd126[] = {
	0xE1, 0xDC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd127[] = {
	0xE2, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd128[] = {
	0xE3, 0x9C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd129[] = {
	0xE4, 0xCC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd130[] = {
	0xE5, 0x0C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd131[] = {
	0xE6, 0x3C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd132[] = {
	0xE7, 0x6C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd133[] = {
	0xE8, 0x9C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd134[] = {
	0xE9, 0xCC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd135[] = {
	0xEA, 0xFC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd136[] = {
	0xEB, 0x2C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd137[] = {
	0xEC, 0x5C, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd138[] = {
	0xED, 0xFC, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd139[] = {
	0xEE, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd140[] = {
	0xEF, 0x15, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd141[] = {
	0xF0, 0xAA, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd142[] = {
	0xF1, 0xAF, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd143[] = {
	0xF2, 0x03, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd144[] = {
	0xB0, 0x03, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd145[] = {
	0xC0, 0x40, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd146[] = {
	0xC1, 0x10, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd147[] = {
	0xC4, 0x2F, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd148[] = {
	0xC5, 0x9E, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd149[] = {
	0xC8, 0x41, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd150[] = {
	0xC9, 0x61, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd151[] = {
	0xCA, 0x01, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd152[] = {
	0xCB, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd153[] = {
	0xDC, 0x01, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd154[] = {
	0xDD, 0x07, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd155[] = {
	0xDE, 0x05, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd156[] = {
	0xDF, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd157[] = {
	0xE0, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd158[] = {
	0xE1, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd159[] = {
	0xE2, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd160[] = {
	0xE3, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd161[] = {
	0xE4, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd162[] = {
	0xE5, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd163[] = {
	0xE6, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd164[] = {
	0xE7, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd165[] = {
	0xE8, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd166[] = {
	0xE9, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd167[] = {
	0xEA, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd168[] = {
	0xEB, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd169[] = {
	0xEC, 0x02, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd170[] = {
	0xED, 0x08, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd171[] = {
	0xEE, 0x06, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd172[] = {
	0xEF, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd173[] = {
	0xF0, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd174[] = {
	0xF1, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd175[] = {
	0xF2, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd176[] = {
	0xF3, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd177[] = {
	0xF4, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd178[] = {
	0xF5, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd179[] = {
	0xF6, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd180[] = {
	0xF7, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd181[] = {
	0xF8, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd182[] = {
	0xF9, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd183[] = {
	0xFA, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd184[] = {
	0xFB, 0x00, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd185[] = {
	0xB0, 0x05, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd186[] = {
	0xB3, 0x52, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd187[] = {
	0xB0, 0x06, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd188[] = {
	0xB8, 0xA5, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd189[] = {
	0xC0, 0xA5, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd190[] = {
	0xC7, 0x1F, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd191[] = {
	0xCE, 0x4F, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd192[] = {
	0xB8, 0x5A, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd193[] = {
	0xC0, 0x5A, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd194[] = {
	0xB0, 0x03, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd195[] = {
	0xB2, 0xA5, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd196[] = {
	0xB3, 0x04, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd197[] = {
	0xB0, 0x0F, 0x15, 0x80
};

static char hx8279a_wsvga_video_on_cmd198[] = {
	0x11, 0x00, 0x05, 0x80
};

static char hx8279a_wsvga_video_on_cmd199[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd hx8279a_wsvga_video_on_command[] = {
	{0x4, hx8279a_wsvga_video_on_cmd0, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd1, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd2, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd3, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd4, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd5, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd6, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd7, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd8, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd9, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd10, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd11, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd12, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd13, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd14, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd15, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd16, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd17, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd18, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd19, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd20, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd21, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd22, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd23, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd24, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd25, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd26, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd27, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd28, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd29, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd30, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd31, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd32, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd33, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd34, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd35, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd36, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd37, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd38, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd39, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd40, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd41, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd42, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd43, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd44, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd45, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd46, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd47, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd48, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd49, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd50, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd51, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd52, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd53, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd54, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd55, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd56, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd57, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd58, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd59, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd60, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd61, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd62, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd63, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd64, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd65, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd66, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd67, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd68, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd69, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd70, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd71, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd72, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd73, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd74, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd75, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd76, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd77, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd78, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd79, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd80, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd81, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd82, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd83, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd84, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd85, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd86, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd87, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd88, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd89, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd90, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd91, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd92, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd93, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd94, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd95, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd96, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd97, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd98, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd99, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd100, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd101, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd102, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd103, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd104, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd105, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd106, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd107, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd108, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd109, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd110, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd111, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd112, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd113, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd114, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd115, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd116, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd117, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd118, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd119, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd120, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd121, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd122, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd123, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd124, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd125, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd126, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd127, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd128, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd129, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd130, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd131, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd132, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd133, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd134, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd135, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd136, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd137, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd138, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd139, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd140, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd141, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd142, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd143, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd144, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd145, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd146, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd147, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd148, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd149, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd150, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd151, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd152, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd153, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd154, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd155, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd156, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd157, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd158, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd159, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd160, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd161, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd162, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd163, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd164, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd165, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd166, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd167, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd168, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd169, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd170, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd171, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd172, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd173, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd174, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd175, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd176, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd177, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd178, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd179, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd180, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd181, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd182, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd183, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd184, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd185, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd186, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd187, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd188, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd189, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd190, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd191, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd192, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd193, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd194, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd195, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd196, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd197, 0x00},
	{0x4, hx8279a_wsvga_video_on_cmd198, 0xc8},
	{0x4, hx8279a_wsvga_video_on_cmd199, 0x23}
};

#define HX8279A_WSVGA_VIDEO_ON_COMMAND 200


static char hx8279a_wsvga_videooff_cmd0[] = {
	0x28, 0x00, 0x05, 0x80
};

static char hx8279a_wsvga_videooff_cmd1[] = {
	0x04, 0x00, 0x39, 0xC0,
	0xC3, 0x40, 0x00, 0x20,
};

static char hx8279a_wsvga_videooff_cmd2[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd hx8279a_wsvga_video_off_command[] = {
	{0x4, hx8279a_wsvga_videooff_cmd0, 0x32},
	{0x8, hx8279a_wsvga_videooff_cmd1, 0x00},
	{0x4, hx8279a_wsvga_videooff_cmd2, 0x96}
};

#define HX8279A_WSVGA_VIDEO_OFF_COMMAND 3


static struct command_state hx8279a_wsvga_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info hx8279a_wsvga_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info hx8279a_wsvga_video_video_panel = {
	1, 0, 0, 0, 1, 1, 0, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration hx8279a_wsvga_video_lane_config = {
	4, 0, 1, 1, 1, 1, 0
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t hx8279a_wsvga_video_timings[] = {
	0x39, 0x10, 0x0A, 0x00, 0x30, 0x32, 0x0E, 0x14, 0x0D, 0x03, 0x04, 0x00
};

static struct panel_timing hx8279a_wsvga_video_timing_info = {
	0, 4, 0x1E, 0x38
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence hx8279a_wsvga_video_reset_seq = {
	{1, 0, 1, }, {1, 50, 100, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight hx8279a_wsvga_video_backlight = {
	0, 1, 255, 2, 0, "PMIC_8941"
};

#endif /*_PANEL_HX8279A_WSVGA_VIDEO_H_*/
