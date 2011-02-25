<?php

/*
 * Create the additional/custom fields
 */
function backgroundfield_field_settings_form($field) {
  $form['css_selector'] = array(
    '#type' => 'textfield',
    '#title' => t('CSS Selector'),
    '#default_value' => ($field['css_selector'])? $field['css_selector'] : 'body',
    '#description' => t('Enter a CSS selector to select the page element(s) to apply the background image. For example: .content')
  );
  $form['repeat'] = array(
    '#type' => 'radios',
    '#title' => t('Repeat'),
    '#default_value' => ($field['repeat'])? $field['repeat'] : 'repeat',
    '#options' => array(
      'repeat' => t('Repeat'),
      'repeat-x' => t('Repeat Horizontally'),
      'repeat-y' => t('Repeat Vertically'),
      'no-repeat' => t('No Repeat')
    )
  );
  $form['h_position'] = array(
    '#type' => 'radios',
    '#title' => t('Horizontal Position'),
    '#default_value' => ($field['h_position'])? $field['h_position'] : 'left',
    '#options' => array(
      'left' => t('Left'),
      'center' => t('Center'),
      'right' => t('Right')
    )
  );
  $form['v_position'] = array(
    '#type' => 'radios',
    '#title' => t('Vertical Position'),
    '#default_value' => ($field['v_position'])? $field['v_position'] : 'top',
    '#options' => array(
      'top' => t('Top'),
      'center' => t('Center'),
      'bottom' => t('Bottom')
    )
  );
  return $form;
}

/* 
 * Fields to save
 */
function backgroundfield_field_settings_save($field) {
  $save1 = filefield_field_settings('save', $field);
  $save2 = array(
    'css_selector',
    'repeat',
    'h_position',
    'v_position'
  );
  return array_merge($save1, $save2);
}

