<?php
/**
 * @file
 * mf_dashboard.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mf_dashboard_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-dashboard_chatbox_control'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'dashboard_chatbox_control',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blogger_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blogger_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -12,
      ),
    ),
    'title' => 'Chat Box Control',
    'visibility' => 0,
  );

  $export['block-dashboard_content_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'dashboard_content_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blogger_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blogger_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -13,
      ),
    ),
    'title' => 'Content',
    'visibility' => 0,
  );

  $export['block-dashboard_vocabulory'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'dashboard_vocabulory',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'Site Administrator' => 5,
      'Super Administrator' => 3,
    ),
    'themes' => array(
      'blogger_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blogger_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -11,
      ),
    ),
    'title' => 'Vocabulory',
    'visibility' => 0,
  );

  return $export;
}
