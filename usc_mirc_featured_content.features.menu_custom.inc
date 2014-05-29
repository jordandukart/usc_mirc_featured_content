<?php
/**
 * @file
 * usc_mirc_featured_content.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function usc_mirc_featured_content_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-collections.
  $menus['menu-collections'] = array(
    'menu_name' => 'menu-collections',
    'title' => 'Collections',
    'description' => '',
  );
  // Exported menu: menu-learn-more.
  $menus['menu-learn-more'] = array(
    'menu_name' => 'menu-learn-more',
    'title' => 'Learn More',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Collections');
  t('Learn More');


  return $menus;
}
