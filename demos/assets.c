#include "awtk.h"
#include "base/assets_manager.h"
#ifndef WITH_FS_RES
#include "assets/default/inc/strings/zh_CN.data"
#include "assets/default/inc/strings/en_US.data"
#include "assets/default/inc/styles/tab_bottom_compact.data"
#include "assets/default/inc/styles/dialog.data"
#include "assets/default/inc/styles/button.data"
#include "assets/default/inc/styles/dialog_warn.data"
#include "assets/default/inc/styles/calibration.data"
#include "assets/default/inc/styles/system_bar_bottom.data"
#include "assets/default/inc/styles/slide_menu.data"
#include "assets/default/inc/styles/big_font.data"
#include "assets/default/inc/styles/tab_top.data"
#include "assets/default/inc/styles/keyboard.data"
#include "assets/default/inc/styles/default.data"
#include "assets/default/inc/styles/color.data"
#include "assets/default/inc/styles/dialog_info.data"
#include "assets/default/inc/styles/digit_clock.data"
#include "assets/default/inc/styles/guage.data"
#include "assets/default/inc/styles/tab_list.data"
#include "assets/default/inc/styles/tab_bottom.data"
#include "assets/default/inc/styles/dialog_toast.data"
#include "assets/default/inc/styles/system_bar.data"
#include "assets/default/inc/styles/dialog_confirm.data"
#include "assets/default/inc/styles/tab_top_compact.data"
#include "assets/default/inc/styles/edit.data"
#include "assets/default/inc/ui/slide_view.data"
#include "assets/default/inc/ui/scroll_bar.data"
#include "assets/default/inc/ui/lua.data"
#include "assets/default/inc/ui/list_view_vh.data"
#include "assets/default/inc/ui/tab_bottom_compact.data"
#include "assets/default/inc/ui/slide_view_h_loop.data"
#include "assets/default/inc/ui/slide_view_h1.data"
#include "assets/default/inc/ui/main.data"
#include "assets/default/inc/ui/soft_keyboard.data"
#include "assets/default/inc/ui/scroll_bar_h.data"
#include "assets/default/inc/ui/rich_text.data"
#include "assets/default/inc/ui/svg_image.data"
#include "assets/default/inc/ui/animator.data"
#include "assets/default/inc/ui/tab_scrollable.data"
#include "assets/default/inc/ui/menu.data"
#include "assets/default/inc/ui/dialogs.data"
#include "assets/default/inc/ui/button.data"
#include "assets/default/inc/ui/progress_circle.data"
#include "assets/default/inc/ui/menu_right_bottom.data"
#include "assets/default/inc/ui/slide_view_v.data"
#include "assets/default/inc/ui/selectm.data"
#include "assets/default/inc/ui/slide_right.data"
#include "assets/default/inc/ui/combo_box.data"
#include "assets/default/inc/ui/kb_hex.data"
#include "assets/default/inc/ui/linear_gradient.data"
#include "assets/default/inc/ui/time_clock.data"
#include "assets/default/inc/ui/tab_control.data"
#include "assets/default/inc/ui/auto_play.data"
#include "assets/default/inc/ui/htranslate.data"
#include "assets/default/inc/ui/radial_gradient.data"
#include "assets/default/inc/ui/mono_test.data"
#include "assets/default/inc/ui/slide_left.data"
#include "assets/default/inc/ui/system_bar_bottom.data"
#include "assets/default/inc/ui/spinbox.data"
#include "assets/default/inc/ui/slide_menu.data"
#include "assets/default/inc/ui/scroll_view.data"
#include "assets/default/inc/ui/menu_down_right.data"
#include "assets/default/inc/ui/kb_uint.data"
#include "assets/default/inc/ui/menu_left_bottom.data"
#include "assets/default/inc/ui/switch.data"
#include "assets/default/inc/ui/fade.data"
#include "assets/default/inc/ui/test_view.data"
#include "assets/default/inc/ui/hscroll_label.data"
#include "assets/default/inc/ui/locale.data"
#include "assets/default/inc/ui/kb_default.data"
#include "assets/default/inc/ui/color_picker_rgb.data"
#include "assets/default/inc/ui/language.data"
#include "assets/default/inc/ui/rich_text1.data"
#include "assets/default/inc/ui/tab_button_view_page1.data"
#include "assets/default/inc/ui/slide_up.data"
#include "assets/default/inc/ui/menu_down_center.data"
#include "assets/default/inc/ui/big_font.data"
#include "assets/default/inc/ui/auto_play_landscape.data"
#include "assets/default/inc/ui/menu_right_top.data"
#include "assets/default/inc/ui/color_picker_full.data"
#include "assets/default/inc/ui/tab_top.data"
#include "assets/default/inc/ui/list_view.data"
#include "assets/default/inc/ui/back_to_home.data"
#include "assets/default/inc/ui/keyboard.data"
#include "assets/default/inc/ui/dragger.data"
#include "assets/default/inc/ui/kb_phone.data"
#include "assets/default/inc/ui/menu_up_center.data"
#include "assets/default/inc/ui/tab_button_view_page2.data"
#include "assets/default/inc/ui/draggable.data"
#include "assets/default/inc/ui/mledit.data"
#include "assets/default/inc/ui/color_picker.data"
#include "assets/default/inc/ui/overlay.data"
#include "assets/default/inc/ui/kb_float.data"
#include "assets/default/inc/ui/kb_int.data"
#include "assets/default/inc/ui/images.data"
#include "assets/default/inc/ui/slide_view_v2.data"
#include "assets/default/inc/ui/popup.data"
#include "assets/default/inc/ui/select1.data"
#include "assets/default/inc/ui/stroke_gradient.data"
#include "assets/default/inc/ui/kb_ufloat.data"
#include "assets/default/inc/ui/menu_left_middle.data"
#include "assets/default/inc/ui/list_view_d.data"
#include "assets/default/inc/ui/slide_view_v1.data"
#include "assets/default/inc/ui/color.data"
#include "assets/default/inc/ui/slide_view_h.data"
#include "assets/default/inc/ui/menu_up_right.data"
#include "assets/default/inc/ui/menu_left_top.data"
#include "assets/default/inc/ui/digit_clock.data"
#include "assets/default/inc/ui/menu_up_left.data"
#include "assets/default/inc/ui/preload.data"
#include "assets/default/inc/ui/scroll_view_v.data"
#include "assets/default/inc/ui/menu_point.data"
#include "assets/default/inc/ui/dialog1.data"
#include "assets/default/inc/ui/text_selector.data"
#include "assets/default/inc/ui/basic.data"
#include "assets/default/inc/ui/guage.data"
#include "assets/default/inc/ui/kb_ascii.data"
#include "assets/default/inc/ui/auto_play_portrait.data"
#include "assets/default/inc/ui/color_picker_simple.data"
#include "assets/default/inc/ui/image_list.data"
#include "assets/default/inc/ui/image_value.data"
#include "assets/default/inc/ui/tab_list.data"
#include "assets/default/inc/ui/label.data"
#include "assets/default/inc/ui/list_view_m.data"
#include "assets/default/inc/ui/animation.data"
#include "assets/default/inc/ui/popdown.data"
#include "assets/default/inc/ui/mutable_image.data"
#include "assets/default/inc/ui/vtranslate.data"
#include "assets/default/inc/ui/menu_right_middle.data"
#include "assets/default/inc/ui/slide_view_v_loop.data"
#include "assets/default/inc/ui/tab_bottom.data"
#include "assets/default/inc/ui/scroll_view_h.data"
#include "assets/default/inc/ui/memtest.data"
#include "assets/default/inc/ui/dialog2.data"
#include "assets/default/inc/ui/tab_dynamic_list.data"
#include "assets/default/inc/ui/system_bar.data"
#include "assets/default/inc/ui/calibration_win.data"
#include "assets/default/inc/ui/vgcanvas.data"
#include "assets/default/inc/ui/tab_top_compact.data"
#include "assets/default/inc/ui/slide_down.data"
#include "assets/default/inc/ui/rich_text2.data"
#include "assets/default/inc/ui/edit.data"
#include "assets/default/inc/ui/gif_image.data"
#include "assets/default/inc/ui/image_animation.data"
#include "assets/default/inc/ui/slide_view_h2.data"
#include "assets/default/inc/ui/list_view_h.data"
#include "assets/default/inc/ui/color_picker_hsv.data"
#include "assets/default/inc/ui/menu_down_left.data"
#include "assets/default/inc/xml/test.data"
#include "assets/default/inc/data/test_json.data"
#include "assets/default/inc/data/a_b_c_any.data"
#include "assets/default/inc/data/test_dat.data"
#include "assets/default/inc/data/com_zlg_app_json.data"
#ifdef WITH_STB_IMAGE
#include "assets/default/inc/images/rgba.res"
#include "assets/default/inc/images/num_7.res"
#include "assets/default/inc/images/question.res"
#include "assets/default/inc/images/find.res"
#include "assets/default/inc/images/num_dot.res"
#include "assets/default/inc/images/info.res"
#include "assets/default/inc/images/close_n.res"
#include "assets/default/inc/images/arrow_right_p.res"
#include "assets/default/inc/images/slider_drag_o.res"
#include "assets/default/inc/images/edit_clear_o.res"
#include "assets/default/inc/images/cross.res"
#include "assets/default/inc/images/num_1.res"
#include "assets/default/inc/images/play_p.res"
#include "assets/default/inc/images/shifton.res"
#include "assets/default/inc/images/slider_v_bg.res"
#include "assets/default/inc/images/num_5.res"
#include "assets/default/inc/images/arrow_down_n.res"
#include "assets/default/inc/images/green_btn_n.res"
#include "assets/default/inc/images/unmuted.res"
#include "assets/default/inc/images/muted.res"
#include "assets/default/inc/images/clock_second.res"
#include "assets/default/inc/images/3.res"
#include "assets/default/inc/images/arrow_up_n.res"
#include "assets/default/inc/images/arrow_left_p.res"
#include "assets/default/inc/images/msg.res"
#include "assets/default/inc/images/red_btn_o.res"
#include "assets/default/inc/images/close_p.res"
#include "assets/default/inc/images/dialog_title.res"
#include "assets/default/inc/images/visible.res"
#include "assets/default/inc/images/arrow_down_o.res"
#include "assets/default/inc/images/radio_checked.res"
#include "assets/default/inc/images/battery_4.res"
#include "assets/default/inc/images/green_btn_o.res"
#include "assets/default/inc/images/contact_active.res"
#include "assets/default/inc/images/ani7.res"
#include "assets/default/inc/images/edit_clear_p.res"
#include "assets/default/inc/images/msg_active.res"
#include "assets/default/inc/images/shift.res"
#include "assets/default/inc/images/check.res"
#include "assets/default/inc/images/unchecked.res"
#include "assets/default/inc/images/num_2.res"
#include "assets/default/inc/images/contact.res"
#include "assets/default/inc/images/battery_2.res"
#include "assets/default/inc/images/arrow_up_o.res"
#include "assets/default/inc/images/progress_circle.res"
#include "assets/default/inc/images/slider_bg.res"
#include "assets/default/inc/images/warn.res"
#include "assets/default/inc/images/rgb.res"
#include "assets/default/inc/images/clock_bg.res"
#include "assets/default/inc/images/slider_v_fg.res"
#include "assets/default/inc/images/ani9.res"
#include "assets/default/inc/images/backspace.res"
#include "assets/default/inc/images/right_on.res"
#include "assets/default/inc/images/1.res"
#include "assets/default/inc/images/bricks.res"
#include "assets/default/inc/images/arrow_down_p.res"
#include "assets/default/inc/images/guage_bg.res"
#include "assets/default/inc/images/num_6.res"
#include "assets/default/inc/images/discovery.res"
#include "assets/default/inc/images/middle_on.res"
#include "assets/default/inc/images/ani8.res"
#include "assets/default/inc/images/battery_0.res"
#include "assets/default/inc/images/num_4.res"
#include "assets/default/inc/images/dot.res"
#include "assets/default/inc/images/me_active.res"
#include "assets/default/inc/images/zh.res"
#include "assets/default/inc/images/right_off.res"
#include "assets/default/inc/images/ania.res"
#include "assets/default/inc/images/discovery_active.res"
#include "assets/default/inc/images/ani3.res"
#include "assets/default/inc/images/clock.res"
#include "assets/default/inc/images/num_8.res"
#include "assets/default/inc/images/close_d.res"
#include "assets/default/inc/images/battery_5.res"
#include "assets/default/inc/images/play_n.res"
#include "assets/default/inc/images/battery_1.res"
#include "assets/default/inc/images/earth.res"
#include "assets/default/inc/images/play_o.res"
#include "assets/default/inc/images/close_o.res"
#include "assets/default/inc/images/ani1.res"
#include "assets/default/inc/images/ani6.res"
#include "assets/default/inc/images/num_9.res"
#include "assets/default/inc/images/active_dot.res"
#include "assets/default/inc/images/switch.res"
#include "assets/default/inc/images/anic.res"
#include "assets/default/inc/images/message.res"
#include "assets/default/inc/images/arrow_right_o.res"
#include "assets/default/inc/images/invisible.res"
#include "assets/default/inc/images/bee.res"
#include "assets/default/inc/images/battery_3.res"
#include "assets/default/inc/images/empty.res"
#include "assets/default/inc/images/arrow_up_p.res"
#include "assets/default/inc/images/slider_fg.res"
#include "assets/default/inc/images/slider_drag.res"
#include "assets/default/inc/images/edit_clear_n.res"
#include "assets/default/inc/images/anib.res"
#include "assets/default/inc/images/red_btn_p.res"
#include "assets/default/inc/images/arrow_left_o.res"
#include "assets/default/inc/images/2.res"
#include "assets/default/inc/images/logo.res"
#include "assets/default/inc/images/slider_drag_p.res"
#include "assets/default/inc/images/ani2.res"
#include "assets/default/inc/images/clock_minute.res"
#include "assets/default/inc/images/clock_hour.res"
#include "assets/default/inc/images/left_off.res"
#include "assets/default/inc/images/num_0.res"
#include "assets/default/inc/images/arrow_left_n.res"
#include "assets/default/inc/images/red_btn_n.res"
#include "assets/default/inc/images/guage_pointer.res"
#include "assets/default/inc/images/num_3.res"
#include "assets/default/inc/images/checked.res"
#include "assets/default/inc/images/cursor.res"
#include "assets/default/inc/images/ani4.res"
#include "assets/default/inc/images/ani5.res"
#include "assets/default/inc/images/arrow_right_n.res"
#include "assets/default/inc/images/left_on.res"
#include "assets/default/inc/images/radio_unchecked.res"
#include "assets/default/inc/images/middle_off.res"
#include "assets/default/inc/images/en.res"
#include "assets/default/inc/images/me.res"
#include "assets/default/inc/images/green_btn_p.res"
#else
#include "assets/default/inc/images/question.data"
#include "assets/default/inc/images/slider_fg.data"
#include "assets/default/inc/images/green_btn_o.data"
#include "assets/default/inc/images/green_btn_p.data"
#include "assets/default/inc/images/ani9.data"
#include "assets/default/inc/images/bee.data"
#include "assets/default/inc/images/msg_active.data"
#include "assets/default/inc/images/middle_off.data"
#include "assets/default/inc/images/me.data"
#include "assets/default/inc/images/num_3.data"
#include "assets/default/inc/images/arrow_left_n.data"
#include "assets/default/inc/images/clock_bg.data"
#include "assets/default/inc/images/unchecked.data"
#include "assets/default/inc/images/arrow_right_n.data"
#include "assets/default/inc/images/cursor.data"
#include "assets/default/inc/images/ani8.data"
#include "assets/default/inc/images/dot.data"
#include "assets/default/inc/images/backspace.data"
#include "assets/default/inc/images/left_off.data"
#include "assets/default/inc/images/ani5.data"
#include "assets/default/inc/images/progress_circle.data"
#include "assets/default/inc/images/find.data"
#include "assets/default/inc/images/en.data"
#include "assets/default/inc/images/num_2.data"
#include "assets/default/inc/images/warn.data"
#include "assets/default/inc/images/contact_active.data"
#include "assets/default/inc/images/ani3.data"
#include "assets/default/inc/images/msg.data"
#include "assets/default/inc/images/me_active.data"
#include "assets/default/inc/images/green_btn_n.data"
#include "assets/default/inc/images/ani4.data"
#include "assets/default/inc/images/battery_5.data"
#include "assets/default/inc/images/switch.data"
#include "assets/default/inc/images/guage_pointer.data"
#include "assets/default/inc/images/num_9.data"
#include "assets/default/inc/images/play_n.data"
#include "assets/default/inc/images/discovery_active.data"
#include "assets/default/inc/images/red_btn_o.data"
#include "assets/default/inc/images/play_o.data"
#include "assets/default/inc/images/battery_4.data"
#include "assets/default/inc/images/edit_clear_n.data"
#include "assets/default/inc/images/close_p.data"
#include "assets/default/inc/images/slider_drag_p.data"
#include "assets/default/inc/images/1.data"
#include "assets/default/inc/images/arrow_right_p.data"
#include "assets/default/inc/images/earth.data"
#include "assets/default/inc/images/rgba.data"
#include "assets/default/inc/images/check.data"
#include "assets/default/inc/images/slider_bg.data"
#include "assets/default/inc/images/clock.data"
#include "assets/default/inc/images/slider_v_bg.data"
#include "assets/default/inc/images/2.data"
#include "assets/default/inc/images/red_btn_n.data"
#include "assets/default/inc/images/visible.data"
#include "assets/default/inc/images/clock_second.data"
#include "assets/default/inc/images/zh.data"
#include "assets/default/inc/images/anib.data"
#include "assets/default/inc/images/slider_v_fg.data"
#include "assets/default/inc/images/discovery.data"
#include "assets/default/inc/images/ani7.data"
#include "assets/default/inc/images/close_d.data"
#include "assets/default/inc/images/3.data"
#include "assets/default/inc/images/slider_drag.data"
#include "assets/default/inc/images/right_on.data"
#include "assets/default/inc/images/ani1.data"
#include "assets/default/inc/images/battery_2.data"
#include "assets/default/inc/images/arrow_left_p.data"
#include "assets/default/inc/images/battery_3.data"
#include "assets/default/inc/images/arrow_left_o.data"
#include "assets/default/inc/images/arrow_down_n.data"
#include "assets/default/inc/images/info.data"
#include "assets/default/inc/images/clock_hour.data"
#include "assets/default/inc/images/bricks.data"
#include "assets/default/inc/images/empty.data"
#include "assets/default/inc/images/arrow_right_o.data"
#include "assets/default/inc/images/num_6.data"
#include "assets/default/inc/images/num_5.data"
#include "assets/default/inc/images/num_8.data"
#include "assets/default/inc/images/arrow_up_o.data"
#include "assets/default/inc/images/close_o.data"
#include "assets/default/inc/images/rgb.data"
#include "assets/default/inc/images/radio_checked.data"
#include "assets/default/inc/images/arrow_up_n.data"
#include "assets/default/inc/images/close_n.data"
#include "assets/default/inc/images/active_dot.data"
#include "assets/default/inc/images/unmuted.data"
#include "assets/default/inc/images/num_4.data"
#include "assets/default/inc/images/anic.data"
#include "assets/default/inc/images/arrow_up_p.data"
#include "assets/default/inc/images/num_1.data"
#include "assets/default/inc/images/guage_bg.data"
#include "assets/default/inc/images/shifton.data"
#include "assets/default/inc/images/clock_minute.data"
#include "assets/default/inc/images/arrow_down_p.data"
#include "assets/default/inc/images/radio_unchecked.data"
#include "assets/default/inc/images/edit_clear_o.data"
#include "assets/default/inc/images/ania.data"
#include "assets/default/inc/images/red_btn_p.data"
#include "assets/default/inc/images/battery_1.data"
#include "assets/default/inc/images/checked.data"
#include "assets/default/inc/images/arrow_down_o.data"
#include "assets/default/inc/images/num_dot.data"
#include "assets/default/inc/images/dialog_title.data"
#include "assets/default/inc/images/slider_drag_o.data"
#include "assets/default/inc/images/logo.data"
#include "assets/default/inc/images/ani2.data"
#include "assets/default/inc/images/edit_clear_p.data"
#include "assets/default/inc/images/shift.data"
#include "assets/default/inc/images/muted.data"
#include "assets/default/inc/images/play_p.data"
#include "assets/default/inc/images/left_on.data"
#include "assets/default/inc/images/invisible.data"
#include "assets/default/inc/images/ani6.data"
#include "assets/default/inc/images/message.data"
#include "assets/default/inc/images/cross.data"
#include "assets/default/inc/images/num_0.data"
#include "assets/default/inc/images/right_off.data"
#include "assets/default/inc/images/contact.data"
#include "assets/default/inc/images/battery_0.data"
#include "assets/default/inc/images/middle_on.data"
#include "assets/default/inc/images/num_7.data"
#endif/*WITH_STB_IMAGE*/
#ifdef WITH_VGCANVAS
#include "assets/default/inc/images/ball.bsvg"
#include "assets/default/inc/images/girl.bsvg"
#include "assets/default/inc/images/china.bsvg"
#include "assets/default/inc/images/pointer_4.bsvg"
#include "assets/default/inc/images/pointer_1.bsvg"
#include "assets/default/inc/images/pointer.bsvg"
#endif/*WITH_VGCANVAS*/
#if defined(WITH_TRUETYPE_FONT)
#include "assets/default/inc/fonts/default.res"
#else/*WITH_TRUETYPE_FONT*/
#include "assets/default/inc/fonts/default.data"
#endif/*WITH_TRUETYPE_FONT*/
#endif/*WITH_FS_RES*/

ret_t assets_init(void) {
  assets_manager_t* am = assets_manager();

#ifdef WITH_FS_RES
  assets_manager_preload(am, ASSET_TYPE_FONT, "default");
  assets_manager_preload(am, ASSET_TYPE_STYLE, "default");
#else
  assets_manager_add(am, xml_test);
  assets_manager_add(am, style_tab_bottom_compact);
  assets_manager_add(am, style_dialog);
  assets_manager_add(am, style_button);
  assets_manager_add(am, style_dialog_warn);
  assets_manager_add(am, style_calibration);
  assets_manager_add(am, style_system_bar_bottom);
  assets_manager_add(am, style_slide_menu);
  assets_manager_add(am, style_big_font);
  assets_manager_add(am, style_tab_top);
  assets_manager_add(am, style_keyboard);
  assets_manager_add(am, style_default);
  assets_manager_add(am, style_color);
  assets_manager_add(am, style_dialog_info);
  assets_manager_add(am, style_digit_clock);
  assets_manager_add(am, style_guage);
  assets_manager_add(am, style_tab_list);
  assets_manager_add(am, style_tab_bottom);
  assets_manager_add(am, style_dialog_toast);
  assets_manager_add(am, style_system_bar);
  assets_manager_add(am, style_dialog_confirm);
  assets_manager_add(am, style_tab_top_compact);
  assets_manager_add(am, style_edit);
  assets_manager_add(am, strings_zh_CN);
  assets_manager_add(am, strings_en_US);
  assets_manager_add(am, data_test_json);
  assets_manager_add(am, data_a_b_c_any);
  assets_manager_add(am, data_test_dat);
  assets_manager_add(am, data_com_zlg_app_json);
  assets_manager_add(am, font_default);
  assets_manager_add(am, ui_slide_view);
  assets_manager_add(am, ui_scroll_bar);
  assets_manager_add(am, ui_lua);
  assets_manager_add(am, ui_list_view_vh);
  assets_manager_add(am, ui_tab_bottom_compact);
  assets_manager_add(am, ui_slide_view_h_loop);
  assets_manager_add(am, ui_slide_view_h1);
  assets_manager_add(am, ui_main);
  assets_manager_add(am, ui_soft_keyboard);
  assets_manager_add(am, ui_scroll_bar_h);
  assets_manager_add(am, ui_rich_text);
  assets_manager_add(am, ui_svg_image);
  assets_manager_add(am, ui_animator);
  assets_manager_add(am, ui_tab_scrollable);
  assets_manager_add(am, ui_menu);
  assets_manager_add(am, ui_dialogs);
  assets_manager_add(am, ui_button);
  assets_manager_add(am, ui_progress_circle);
  assets_manager_add(am, ui_menu_right_bottom);
  assets_manager_add(am, ui_slide_view_v);
  assets_manager_add(am, ui_selectm);
  assets_manager_add(am, ui_slide_right);
  assets_manager_add(am, ui_combo_box);
  assets_manager_add(am, ui_kb_hex);
  assets_manager_add(am, ui_linear_gradient);
  assets_manager_add(am, ui_time_clock);
  assets_manager_add(am, ui_tab_control);
  assets_manager_add(am, ui_auto_play);
  assets_manager_add(am, ui_htranslate);
  assets_manager_add(am, ui_radial_gradient);
  assets_manager_add(am, ui_mono_test);
  assets_manager_add(am, ui_slide_left);
  assets_manager_add(am, ui_system_bar_bottom);
  assets_manager_add(am, ui_spinbox);
  assets_manager_add(am, ui_slide_menu);
  assets_manager_add(am, ui_scroll_view);
  assets_manager_add(am, ui_menu_down_right);
  assets_manager_add(am, ui_kb_uint);
  assets_manager_add(am, ui_menu_left_bottom);
  assets_manager_add(am, ui_switch);
  assets_manager_add(am, ui_fade);
  assets_manager_add(am, ui_test_view);
  assets_manager_add(am, ui_hscroll_label);
  assets_manager_add(am, ui_locale);
  assets_manager_add(am, ui_kb_default);
  assets_manager_add(am, ui_color_picker_rgb);
  assets_manager_add(am, ui_language);
  assets_manager_add(am, ui_rich_text1);
  assets_manager_add(am, ui_tab_button_view_page1);
  assets_manager_add(am, ui_slide_up);
  assets_manager_add(am, ui_menu_down_center);
  assets_manager_add(am, ui_big_font);
  assets_manager_add(am, ui_auto_play_landscape);
  assets_manager_add(am, ui_menu_right_top);
  assets_manager_add(am, ui_color_picker_full);
  assets_manager_add(am, ui_tab_top);
  assets_manager_add(am, ui_list_view);
  assets_manager_add(am, ui_back_to_home);
  assets_manager_add(am, ui_keyboard);
  assets_manager_add(am, ui_dragger);
  assets_manager_add(am, ui_kb_phone);
  assets_manager_add(am, ui_menu_up_center);
  assets_manager_add(am, ui_tab_button_view_page2);
  assets_manager_add(am, ui_draggable);
  assets_manager_add(am, ui_mledit);
  assets_manager_add(am, ui_color_picker);
  assets_manager_add(am, ui_overlay);
  assets_manager_add(am, ui_kb_float);
  assets_manager_add(am, ui_kb_int);
  assets_manager_add(am, ui_images);
  assets_manager_add(am, ui_slide_view_v2);
  assets_manager_add(am, ui_popup);
  assets_manager_add(am, ui_select1);
  assets_manager_add(am, ui_stroke_gradient);
  assets_manager_add(am, ui_kb_ufloat);
  assets_manager_add(am, ui_menu_left_middle);
  assets_manager_add(am, ui_list_view_d);
  assets_manager_add(am, ui_slide_view_v1);
  assets_manager_add(am, ui_color);
  assets_manager_add(am, ui_slide_view_h);
  assets_manager_add(am, ui_menu_up_right);
  assets_manager_add(am, ui_menu_left_top);
  assets_manager_add(am, ui_digit_clock);
  assets_manager_add(am, ui_menu_up_left);
  assets_manager_add(am, ui_preload);
  assets_manager_add(am, ui_scroll_view_v);
  assets_manager_add(am, ui_menu_point);
  assets_manager_add(am, ui_dialog1);
  assets_manager_add(am, ui_text_selector);
  assets_manager_add(am, ui_basic);
  assets_manager_add(am, ui_guage);
  assets_manager_add(am, ui_kb_ascii);
  assets_manager_add(am, ui_auto_play_portrait);
  assets_manager_add(am, ui_color_picker_simple);
  assets_manager_add(am, ui_image_list);
  assets_manager_add(am, ui_image_value);
  assets_manager_add(am, ui_tab_list);
  assets_manager_add(am, ui_label);
  assets_manager_add(am, ui_list_view_m);
  assets_manager_add(am, ui_animation);
  assets_manager_add(am, ui_popdown);
  assets_manager_add(am, ui_mutable_image);
  assets_manager_add(am, ui_vtranslate);
  assets_manager_add(am, ui_menu_right_middle);
  assets_manager_add(am, ui_slide_view_v_loop);
  assets_manager_add(am, ui_tab_bottom);
  assets_manager_add(am, ui_scroll_view_h);
  assets_manager_add(am, ui_memtest);
  assets_manager_add(am, ui_dialog2);
  assets_manager_add(am, ui_tab_dynamic_list);
  assets_manager_add(am, ui_system_bar);
  assets_manager_add(am, ui_calibration_win);
  assets_manager_add(am, ui_vgcanvas);
  assets_manager_add(am, ui_tab_top_compact);
  assets_manager_add(am, ui_slide_down);
  assets_manager_add(am, ui_rich_text2);
  assets_manager_add(am, ui_edit);
  assets_manager_add(am, ui_gif_image);
  assets_manager_add(am, ui_image_animation);
  assets_manager_add(am, ui_slide_view_h2);
  assets_manager_add(am, ui_list_view_h);
  assets_manager_add(am, ui_color_picker_hsv);
  assets_manager_add(am, ui_menu_down_left);
  assets_manager_add(am, image_question);
  assets_manager_add(am, image_slider_fg);
  assets_manager_add(am, image_green_btn_o);
  assets_manager_add(am, image_green_btn_p);
  assets_manager_add(am, image_ani9);
  assets_manager_add(am, image_bee);
  assets_manager_add(am, image_msg_active);
  assets_manager_add(am, image_middle_off);
  assets_manager_add(am, image_me);
  assets_manager_add(am, image_num_3);
  assets_manager_add(am, image_arrow_left_n);
  assets_manager_add(am, image_clock_bg);
  assets_manager_add(am, image_unchecked);
  assets_manager_add(am, image_arrow_right_n);
  assets_manager_add(am, image_cursor);
  assets_manager_add(am, image_ani8);
  assets_manager_add(am, image_dot);
  assets_manager_add(am, image_backspace);
  assets_manager_add(am, image_left_off);
  assets_manager_add(am, image_ani5);
  assets_manager_add(am, image_progress_circle);
  assets_manager_add(am, image_find);
  assets_manager_add(am, image_en);
  assets_manager_add(am, image_num_2);
  assets_manager_add(am, image_warn);
  assets_manager_add(am, image_contact_active);
  assets_manager_add(am, image_ani3);
  assets_manager_add(am, image_msg);
  assets_manager_add(am, image_me_active);
  assets_manager_add(am, image_green_btn_n);
  assets_manager_add(am, image_ani4);
  assets_manager_add(am, image_battery_5);
  assets_manager_add(am, image_switch);
  assets_manager_add(am, image_guage_pointer);
  assets_manager_add(am, image_num_9);
  assets_manager_add(am, image_play_n);
  assets_manager_add(am, image_discovery_active);
  assets_manager_add(am, image_red_btn_o);
  assets_manager_add(am, image_play_o);
  assets_manager_add(am, image_battery_4);
  assets_manager_add(am, image_edit_clear_n);
  assets_manager_add(am, image_close_p);
  assets_manager_add(am, image_slider_drag_p);
  assets_manager_add(am, image_1);
  assets_manager_add(am, image_arrow_right_p);
  assets_manager_add(am, image_earth);
  assets_manager_add(am, image_rgba);
  assets_manager_add(am, image_check);
  assets_manager_add(am, image_slider_bg);
  assets_manager_add(am, image_clock);
  assets_manager_add(am, image_slider_v_bg);
  assets_manager_add(am, image_2);
  assets_manager_add(am, image_red_btn_n);
  assets_manager_add(am, image_visible);
  assets_manager_add(am, image_clock_second);
  assets_manager_add(am, image_zh);
  assets_manager_add(am, image_anib);
  assets_manager_add(am, image_slider_v_fg);
  assets_manager_add(am, image_discovery);
  assets_manager_add(am, image_ani7);
  assets_manager_add(am, image_close_d);
  assets_manager_add(am, image_3);
  assets_manager_add(am, image_slider_drag);
  assets_manager_add(am, image_right_on);
  assets_manager_add(am, image_ani1);
  assets_manager_add(am, image_battery_2);
  assets_manager_add(am, image_arrow_left_p);
  assets_manager_add(am, image_battery_3);
  assets_manager_add(am, image_arrow_left_o);
  assets_manager_add(am, image_arrow_down_n);
  assets_manager_add(am, image_info);
  assets_manager_add(am, image_clock_hour);
  assets_manager_add(am, image_bricks);
  assets_manager_add(am, image_empty);
  assets_manager_add(am, image_arrow_right_o);
  assets_manager_add(am, image_num_6);
  assets_manager_add(am, image_num_5);
  assets_manager_add(am, image_num_8);
  assets_manager_add(am, image_arrow_up_o);
  assets_manager_add(am, image_close_o);
  assets_manager_add(am, image_rgb);
  assets_manager_add(am, image_radio_checked);
  assets_manager_add(am, image_arrow_up_n);
  assets_manager_add(am, image_close_n);
  assets_manager_add(am, image_active_dot);
  assets_manager_add(am, image_unmuted);
  assets_manager_add(am, image_num_4);
  assets_manager_add(am, image_anic);
  assets_manager_add(am, image_arrow_up_p);
  assets_manager_add(am, image_num_1);
  assets_manager_add(am, image_guage_bg);
  assets_manager_add(am, image_shifton);
  assets_manager_add(am, image_clock_minute);
  assets_manager_add(am, image_arrow_down_p);
  assets_manager_add(am, image_radio_unchecked);
  assets_manager_add(am, image_edit_clear_o);
  assets_manager_add(am, image_ania);
  assets_manager_add(am, image_red_btn_p);
  assets_manager_add(am, image_battery_1);
  assets_manager_add(am, image_checked);
  assets_manager_add(am, image_arrow_down_o);
  assets_manager_add(am, image_num_dot);
  assets_manager_add(am, image_dialog_title);
  assets_manager_add(am, image_slider_drag_o);
  assets_manager_add(am, image_logo);
  assets_manager_add(am, image_ani2);
  assets_manager_add(am, image_edit_clear_p);
  assets_manager_add(am, image_shift);
  assets_manager_add(am, image_muted);
  assets_manager_add(am, image_play_p);
  assets_manager_add(am, image_left_on);
  assets_manager_add(am, image_invisible);
  assets_manager_add(am, image_ani6);
  assets_manager_add(am, image_message);
  assets_manager_add(am, image_cross);
  assets_manager_add(am, image_num_0);
  assets_manager_add(am, image_right_off);
  assets_manager_add(am, image_contact);
  assets_manager_add(am, image_battery_0);
  assets_manager_add(am, image_middle_on);
  assets_manager_add(am, image_num_7);
#ifdef WITH_VGCANVAS
  assets_manager_add(am, image_ball);
  assets_manager_add(am, image_girl);
  assets_manager_add(am, image_china);
  assets_manager_add(am, image_pointer_4);
  assets_manager_add(am, image_pointer_1);
  assets_manager_add(am, image_pointer);
#endif/*WITH_VGCANVAS*/
#endif

  tk_init_assets();
  return RET_OK;
}
