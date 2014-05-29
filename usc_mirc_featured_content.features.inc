<?php
/**
 * @file
 * usc_mirc_featured_content.features.inc
 */

/**
 * Implements hook_views_api().
 */
function usc_mirc_featured_content_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function usc_mirc_featured_content_node_info() {
  $items = array(
    'featured_content' => array(
      'name' => t('Featured Content'),
      'base' => 'node_content',
      'description' => t('Create featured content for the Repository\'s front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
