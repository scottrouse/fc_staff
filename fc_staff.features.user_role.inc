<?php
/**
 * @file
 * fc_staff.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fc_staff_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '5',
  );

  // Exported role: content admin.
  $roles['content admin'] = array(
    'name' => 'content admin',
    'weight' => '3',
  );

  // Exported role: site owner.
  $roles['site owner'] = array(
    'name' => 'site owner',
    'weight' => '4',
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => '2',
  );

  return $roles;
}
