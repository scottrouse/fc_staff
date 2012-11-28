<?php
/**
 * @file
 * fc_staff.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function fc_staff_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-secondary-menu:node/11
  $menu_links['menu-secondary-menu:node/11'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Personnel',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Personnel');


  return $menu_links;
}
