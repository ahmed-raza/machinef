<?php
/**
 * @file
 * mf_dashboard.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function mf_dashboard_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Chatbox Control - Dashboard';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'dashboard_chatbox_control';
  $fe_block_boxes->body = '<ul><li><a href="/admin/shoutbox">Delete messages</a></li></ul>';

  $export['dashboard_chatbox_control'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Dashboard - Content Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'dashboard_content_block';
  $fe_block_boxes->body = '<ul><li><a href="/admin/forums">Forums Posts</a></li><li><a href="/admin/banners">Main Banners</a></li></ul>';

  $export['dashboard_content_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Dashboard subject codes';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'dashboard_vocabulory';
  $fe_block_boxes->body = '<ul><li><a href="/admin/subject-codes">Subject Codes</a></li></ul>';

  $export['dashboard_vocabulory'] = $fe_block_boxes;

  return $export;
}
