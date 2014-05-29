<?php
/**
 * @file
 * usc_mirc_featured_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function usc_mirc_featured_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-collections:<front>
  $menu_links['menu-collections:<front>'] = array(
    'menu_name' => 'menu-collections',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-collections:featured
  $menu_links['menu-collections:featured'] = array(
    'menu_name' => 'menu-collections',
    'link_path' => 'featured',
    'router_path' => 'featured',
    'link_title' => 'Past Features',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-collections:islandora
  $menu_links['menu-collections:islandora'] = array(
    'menu_name' => 'menu-collections',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Browse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
  );
  // Exported menu link: menu-collections:islandora-bookmark
  $menu_links['menu-collections:islandora-bookmark'] = array(
    'menu_name' => 'menu-collections',
    'link_path' => 'islandora-bookmark',
    'router_path' => 'islandora-bookmark',
    'link_title' => 'MyVideos',
    'options' => array(
      'attributes' => array(
        'title' => 'Track and manage MyVideo lists.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-learn-more:http://libcat.csd.sc.edu:81/
  $menu_links['menu-learn-more:http://libcat.csd.sc.edu:81/'] = array(
    'menu_name' => 'menu-learn-more',
    'link_path' => 'http://libcat.csd.sc.edu:81/',
    'router_path' => '',
    'link_title' => 'Legacy Catalog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-learn-more:http://library.sc.edu/mirc
  $menu_links['menu-learn-more:http://library.sc.edu/mirc'] = array(
    'menu_name' => 'menu-learn-more',
    'link_path' => 'http://library.sc.edu/mirc',
    'router_path' => '',
    'link_title' => 'Department Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-learn-more:node/6
  $menu_links['menu-learn-more:node/6'] = array(
    'menu_name' => 'menu-learn-more',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'About The DVR',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-learn-more:node/7
  $menu_links['menu-learn-more:node/7'] = array(
    'menu_name' => 'menu-learn-more',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Access',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-learn-more:node/8
  $menu_links['menu-learn-more:node/8'] = array(
    'menu_name' => 'menu-learn-more',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Preservation FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About The DVR');
  t('Access');
  t('Browse');
  t('Department Home');
  t('Legacy Catalog');
  t('MyVideos');
  t('Past Features');
  t('Preservation FAQ');
  t('Search');


  return $menu_links;
}
