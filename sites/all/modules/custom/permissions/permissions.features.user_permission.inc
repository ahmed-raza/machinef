<?php
/**
 * @file
 * permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access shoutbox'.
  $permissions['access shoutbox'] = array(
    'name' => 'access shoutbox',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'shoutbox',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add terms in exam_type'.
  $permissions['add terms in exam_type'] = array(
    'name' => 'add terms in exam_type',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in forums'.
  $permissions['add terms in forums'] = array(
    'name' => 'add terms in forums',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in subject_code'.
  $permissions['add terms in subject_code'] = array(
    'name' => 'add terms in subject_code',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in tags'.
  $permissions['add terms in tags'] = array(
    'name' => 'add terms in tags',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer Search Autocomplete'.
  $permissions['administer Search Autocomplete'] = array(
    'name' => 'administer Search Autocomplete',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'search_autocomplete',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: 'administer empty page callbacks'.
  $permissions['administer empty page callbacks'] = array(
    'name' => 'administer empty page callbacks',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'empty_page',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer forums'.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      'Forum Moderator' => 'Forum Moderator',
      'Super Administrator' => 'Super Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'forum',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer shoutbox'.
  $permissions['administer shoutbox'] = array(
    'name' => 'administer shoutbox',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'shoutbox',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create date content'.
  $permissions['create date content'] = array(
    'name' => 'create date content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create main_banner content'.
  $permissions['create main_banner content'] = array(
    'name' => 'create main_banner content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create past_papers content'.
  $permissions['create past_papers content'] = array(
    'name' => 'create past_papers content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any date content'.
  $permissions['delete any date content'] = array(
    'name' => 'delete any date content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any forum content'.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      'Forum Moderator' => 'Forum Moderator',
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any main_banner content'.
  $permissions['delete any main_banner content'] = array(
    'name' => 'delete any main_banner content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any past_papers content'.
  $permissions['delete any past_papers content'] = array(
    'name' => 'delete any past_papers content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own date content'.
  $permissions['delete own date content'] = array(
    'name' => 'delete own date content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own forum content'.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      'Forum Moderator' => 'Forum Moderator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own main_banner content'.
  $permissions['delete own main_banner content'] = array(
    'name' => 'delete own main_banner content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own past_papers content'.
  $permissions['delete own past_papers content'] = array(
    'name' => 'delete own past_papers content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own shouts'.
  $permissions['delete own shouts'] = array(
    'name' => 'delete own shouts',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'shoutbox',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in exam_type'.
  $permissions['delete terms in exam_type'] = array(
    'name' => 'delete terms in exam_type',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in forums'.
  $permissions['delete terms in forums'] = array(
    'name' => 'delete terms in forums',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in subject_code'.
  $permissions['delete terms in subject_code'] = array(
    'name' => 'delete terms in subject_code',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any date content'.
  $permissions['edit any date content'] = array(
    'name' => 'edit any date content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      'Forum Moderator' => 'Forum Moderator',
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any main_banner content'.
  $permissions['edit any main_banner content'] = array(
    'name' => 'edit any main_banner content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any past_papers content'.
  $permissions['edit any past_papers content'] = array(
    'name' => 'edit any past_papers content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own date content'.
  $permissions['edit own date content'] = array(
    'name' => 'edit own date content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own main_banner content'.
  $permissions['edit own main_banner content'] = array(
    'name' => 'edit own main_banner content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own past_papers content'.
  $permissions['edit own past_papers content'] = array(
    'name' => 'edit own past_papers content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own shouts'.
  $permissions['edit own shouts'] = array(
    'name' => 'edit own shouts',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'shoutbox',
  );

  // Exported permission: 'edit terms in exam_type'.
  $permissions['edit terms in exam_type'] = array(
    'name' => 'edit terms in exam_type',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in forums'.
  $permissions['edit terms in forums'] = array(
    'name' => 'edit terms in forums',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in subject_code'.
  $permissions['edit terms in subject_code'] = array(
    'name' => 'edit terms in subject_code',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'moderate shoutbox'.
  $permissions['moderate shoutbox'] = array(
    'name' => 'moderate shoutbox',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'shoutbox',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'post shouts'.
  $permissions['post shouts'] = array(
    'name' => 'post shouts',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'shoutbox',
  );

  // Exported permission: 'post shouts without approval'.
  $permissions['post shouts without approval'] = array(
    'name' => 'post shouts without approval',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'shoutbox',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Forum Moderator' => 'Forum Moderator',
      'Super Administrator' => 'Super Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use Search Autocomplete'.
  $permissions['use Search Autocomplete'] = array(
    'name' => 'use Search Autocomplete',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_autocomplete',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use bulk exporter'.
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'bulk_export',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format ds_code'.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Forum Moderator' => 'Forum Moderator',
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'date_repeat_field',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Forum Moderator' => 'Forum Moderator',
      'Site Administrator' => 'Site Administrator',
      'Super Administrator' => 'Super Administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
