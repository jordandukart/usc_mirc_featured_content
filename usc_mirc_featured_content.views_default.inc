<?php
/**
 * @file
 * usc_mirc_featured_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function usc_mirc_featured_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Content';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Object Link */
  $handler->display->display_options['fields']['field_object_url']['id'] = 'field_object_url';
  $handler->display->display_options['fields']['field_object_url']['table'] = 'field_data_field_object_url';
  $handler->display->display_options['fields']['field_object_url']['field'] = 'field_object_url';
  $handler->display->display_options['fields']['field_object_url']['label'] = '';
  $handler->display->display_options['fields']['field_object_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_object_url]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_object_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Collection Link */
  $handler->display->display_options['fields']['field_collection_url']['id'] = 'field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['table'] = 'field_data_field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['field'] = 'field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['label'] = '';
  $handler->display->display_options['fields']['field_collection_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url']['alter']['text'] = 'Browse the Collection';
  $handler->display->display_options['fields']['field_collection_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url']['alter']['path'] = '[field_collection_url]';
  $handler->display->display_options['fields']['field_collection_url']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_content' => 'featured_content',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'featured';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_collection_url' => 'field_collection_url',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['row_options']['separator'] = '|';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Object Link */
  $handler->display->display_options['fields']['field_object_url']['id'] = 'field_object_url';
  $handler->display->display_options['fields']['field_object_url']['table'] = 'field_data_field_object_url';
  $handler->display->display_options['fields']['field_object_url']['field'] = 'field_object_url';
  $handler->display->display_options['fields']['field_object_url']['label'] = '';
  $handler->display->display_options['fields']['field_object_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_object_url]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_object_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Collection Link */
  $handler->display->display_options['fields']['field_collection_url']['id'] = 'field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['table'] = 'field_data_field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['field'] = 'field_collection_url';
  $handler->display->display_options['fields']['field_collection_url']['label'] = '';
  $handler->display->display_options['fields']['field_collection_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url']['alter']['text'] = 'Browse the Collection';
  $handler->display->display_options['fields']['field_collection_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_collection_url']['alter']['path'] = '[field_collection_url]';
  $handler->display->display_options['fields']['field_collection_url']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View All Featured Items';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'featured';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $translatables['featured_content'] = array(
    t('Master'),
    t('Featured Content'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Browse the Collection'),
    t('Page'),
    t('Block'),
    t('View All Featured Items'),
  );
  $export['featured_content'] = $view;

  return $export;
}
