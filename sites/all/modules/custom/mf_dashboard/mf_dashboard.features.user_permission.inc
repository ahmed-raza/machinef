<?php
/**
 * @file
 * mf_dashboard.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mf_dashboard_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'dashboard',
  );

  return $permissions;
}
