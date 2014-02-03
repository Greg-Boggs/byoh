<?php
/**
 * @file
 * default_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function default_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-top-menu.
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Top Menu',
    'description' => 'Menu across the top of the site.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu across the top of the site.');
  t('Top Menu');


  return $menus;
}
