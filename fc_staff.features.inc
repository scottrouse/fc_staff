<?php
/**
 * @file
 * fc_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fc_staff_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fc_staff_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function fc_staff_default_profile2_type() {
  $items = array();
  $items['staff_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "staff_profile",
    "label" : "Staff Profile",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : [  ]
  }');
  return $items;
}
