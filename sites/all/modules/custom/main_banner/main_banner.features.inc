<?php
/**
 * @file
 * main_banner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function main_banner_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function main_banner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function main_banner_node_info() {
  $items = array(
    'main_banner' => array(
      'name' => t('Main Banner'),
      'base' => 'node_content',
      'description' => t('Use this content type for main top banner.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
