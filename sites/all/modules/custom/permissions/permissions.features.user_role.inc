<?php
/**
 * @file
 * permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function permissions_user_default_roles() {
  $roles = array();

  // Exported role: Forum Moderator.
  $roles['Forum Moderator'] = array(
    'name' => 'Forum Moderator',
    'weight' => 2,
  );

  // Exported role: Site Administrator.
  $roles['Site Administrator'] = array(
    'name' => 'Site Administrator',
    'weight' => 3,
  );

  // Exported role: Super Administrator.
  $roles['Super Administrator'] = array(
    'name' => 'Super Administrator',
    'weight' => 4,
  );

  return $roles;
}
