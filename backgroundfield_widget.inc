<?php
// $Id$

function backgroundfield_widget_settings_form($widget) {
  $form = imagefield_widget_settings_form($widget);
  unset($form['alt_settings']); // remove image alt fields
  unset($form['title_settings']); // remove image title fields
  return $form;
}

function backgroundfield_widget_settings_save($widget) {
  $save1 = imagefield_widget_settings_save($widget);
  $save2 = array(
    'css_selector',
    'repeat',
    'h_position',
    'v_position'
  );
  return array_merge($save1, $save2);
}
