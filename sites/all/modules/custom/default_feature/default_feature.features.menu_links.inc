<?php
/**
 * @file
 * default_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function default_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-top-menu_home:node/1
  $menu_links['menu-top-menu_home:node/1'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'menu-top-menu_home:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');


  return $menu_links;
}
