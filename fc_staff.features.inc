<?php
/**
 * @file
 * fc_staff.features.inc
 */

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
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
