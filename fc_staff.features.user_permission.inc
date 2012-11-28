<?php
/**
 * @file
 * fc_staff.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fc_staff_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'faculty',
      3 => 'site owner',
      4 => 'staff',
      5 => 'student',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access draggableviews.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer add another.
  $permissions['administer add another'] = array(
    'name' => 'administer add another',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'addanother',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'block',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer profile types.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer profiles.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer realname.
  $permissions['administer realname'] = array(
    'name' => 'administer realname',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'realname',
  );

  // Exported permission: administer rh_node.
  $permissions['administer rh_node'] = array(
    'name' => 'administer rh_node',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'views',
  );

  // Exported permission: administer xmlsitemap.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rh_node.
  $permissions['bypass rh_node'] = array(
    'name' => 'bypass rh_node',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: create assignment content.
  $permissions['create assignment content'] = array(
    'name' => 'create assignment content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: create project content.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: create publication content.
  $permissions['create publication content'] = array(
    'name' => 'create publication content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'path',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete any assignment content.
  $permissions['delete any assignment content'] = array(
    'name' => 'delete any assignment content',
    'roles' => array(
      0 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any project content.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      0 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any publication content.
  $permissions['delete any publication content'] = array(
    'name' => 'delete any publication content',
    'roles' => array(
      0 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own assignment content.
  $permissions['delete own assignment content'] = array(
    'name' => 'delete own assignment content',
    'roles' => array(
      0 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own project content.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      0 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own publication content.
  $permissions['delete own publication content'] = array(
    'name' => 'delete own publication content',
    'roles' => array(
      0 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: edit any assignment content.
  $permissions['edit any assignment content'] = array(
    'name' => 'edit any assignment content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any project content.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any publication content.
  $permissions['edit any publication content'] = array(
    'name' => 'edit any publication content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any staff_profile profile.
  $permissions['edit any staff_profile profile'] = array(
    'name' => 'edit any staff_profile profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own assignment content.
  $permissions['edit own assignment content'] = array(
    'name' => 'edit own assignment content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own project content.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own publication content.
  $permissions['edit own publication content'] = array(
    'name' => 'edit own publication content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own staff_profile profile.
  $permissions['edit own staff_profile profile'] = array(
    'name' => 'edit own staff_profile profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'faculty',
      3 => 'site owner',
      4 => 'staff',
      5 => 'student',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: publish any assignment content.
  $permissions['publish any assignment content'] = array(
    'name' => 'publish any assignment content',
    'roles' => array(
      0 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any content.
  $permissions['publish any content'] = array(
    'name' => 'publish any content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any project content.
  $permissions['publish any project content'] = array(
    'name' => 'publish any project content',
    'roles' => array(
      0 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any publication content.
  $permissions['publish any publication content'] = array(
    'name' => 'publish any publication content',
    'roles' => array(
      0 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable assignment content.
  $permissions['publish editable assignment content'] = array(
    'name' => 'publish editable assignment content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable project content.
  $permissions['publish editable project content'] = array(
    'name' => 'publish editable project content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable publication content.
  $permissions['publish editable publication content'] = array(
    'name' => 'publish editable publication content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own assignment content.
  $permissions['publish own assignment content'] = array(
    'name' => 'publish own assignment content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own project content.
  $permissions['publish own project content'] = array(
    'name' => 'publish own project content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own publication content.
  $permissions['publish own publication content'] = array(
    'name' => 'publish own publication content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'user',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: unpublish any assignment content.
  $permissions['unpublish any assignment content'] = array(
    'name' => 'unpublish any assignment content',
    'roles' => array(
      0 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any content.
  $permissions['unpublish any content'] = array(
    'name' => 'unpublish any content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any project content.
  $permissions['unpublish any project content'] = array(
    'name' => 'unpublish any project content',
    'roles' => array(
      0 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any publication content.
  $permissions['unpublish any publication content'] = array(
    'name' => 'unpublish any publication content',
    'roles' => array(
      0 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable assignment content.
  $permissions['unpublish editable assignment content'] = array(
    'name' => 'unpublish editable assignment content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable project content.
  $permissions['unpublish editable project content'] = array(
    'name' => 'unpublish editable project content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable publication content.
  $permissions['unpublish editable publication content'] = array(
    'name' => 'unpublish editable publication content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own assignment content.
  $permissions['unpublish own assignment content'] = array(
    'name' => 'unpublish own assignment content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own project content.
  $permissions['unpublish own project content'] = array(
    'name' => 'unpublish own project content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own publication content.
  $permissions['unpublish own publication content'] = array(
    'name' => 'unpublish own publication content',
    'roles' => array(
      0 => 'content admin',
      1 => 'site owner',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: use add another.
  $permissions['use add another'] = array(
    'name' => 'use add another',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'faculty',
      3 => 'site owner',
      4 => 'staff',
      5 => 'student',
    ),
    'module' => 'addanother',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'search',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'filter',
  );

  // Exported permission: view any staff_profile profile.
  $permissions['view any staff_profile profile'] = array(
    'name' => 'view any staff_profile profile',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any unpublished assignment content.
  $permissions['view any unpublished assignment content'] = array(
    'name' => 'view any unpublished assignment content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished content.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished page content.
  $permissions['view any unpublished page content'] = array(
    'name' => 'view any unpublished page content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished project content.
  $permissions['view any unpublished project content'] = array(
    'name' => 'view any unpublished project content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished publication content.
  $permissions['view any unpublished publication content'] = array(
    'name' => 'view any unpublished publication content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: view own staff_profile profile.
  $permissions['view own staff_profile profile'] = array(
    'name' => 'view own staff_profile profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'faculty',
      3 => 'site owner',
      4 => 'staff',
      5 => 'student',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
      1 => 'content admin',
      2 => 'site owner',
    ),
    'module' => 'system',
  );

  return $permissions;
}
