<?php
/**
 * @file
 * mf_past_papers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mf_past_papers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mf_past_papers_node_info() {
  $items = array(
    'past_papers' => array(
      'name' => t('Past Papers'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
