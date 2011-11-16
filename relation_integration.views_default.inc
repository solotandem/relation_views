<?php
/**
 * @file
 * relation_integration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function relation_integration_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'relation_integration';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'relation';
  $view->human_name = 'Relation integration';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Relation integration';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Relation: Relation: Baz (relation -> node) */
  $handler->display->display_options['relationships']['relation_base_baz_right_node']['id'] = 'relation_base_baz_right_node';
  $handler->display->display_options['relationships']['relation_base_baz_right_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_baz_right_node']['field'] = 'relation_base_baz_right_node';
  $handler->display->display_options['relationships']['relation_base_baz_right_node']['required'] = 1;
  /* Relationship: Content: Relation: Baz (node <-> node) */
  $handler->display->display_options['relationships']['relation_baz_node']['id'] = 'relation_baz_node';
  $handler->display->display_options['relationships']['relation_baz_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_baz_node']['field'] = 'relation_baz_node';
  $handler->display->display_options['relationships']['relation_baz_node']['relationship'] = 'relation_base_baz_right_node';
  $handler->display->display_options['relationships']['relation_baz_node']['label'] = 'Baz node-node';
  $handler->display->display_options['relationships']['relation_baz_node']['required'] = 1;
  $handler->display->display_options['relationships']['relation_baz_node']['r_index'] = '0';
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: Content: Bar */
  $handler->display->display_options['fields']['bar']['id'] = 'bar';
  $handler->display->display_options['fields']['bar']['table'] = 'field_data_bar';
  $handler->display->display_options['fields']['bar']['field'] = 'bar';
  $handler->display->display_options['fields']['bar']['relationship'] = 'relation_base_baz_right_node';
  $handler->display->display_options['fields']['bar']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['bar']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['bar']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['bar']['alter']['external'] = 0;
  $handler->display->display_options['fields']['bar']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['bar']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['bar']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['bar']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['bar']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['bar']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['bar']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['bar']['alter']['html'] = 0;
  $handler->display->display_options['fields']['bar']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['bar']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['bar']['hide_empty'] = 0;
  $handler->display->display_options['fields']['bar']['empty_zero'] = 0;
  $handler->display->display_options['fields']['bar']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['bar']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_baz_node';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Relation: relation test */
  $handler->display->display_options['fields']['relationtest']['id'] = 'relationtest';
  $handler->display->display_options['fields']['relationtest']['table'] = 'field_data_relationtest';
  $handler->display->display_options['fields']['relationtest']['field'] = 'relationtest';
  $handler->display->display_options['fields']['relationtest']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['relationtest']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['relationtest']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['relationtest']['alter']['external'] = 0;
  $handler->display->display_options['fields']['relationtest']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['relationtest']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['relationtest']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['relationtest']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['relationtest']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['relationtest']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['relationtest']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['relationtest']['alter']['html'] = 0;
  $handler->display->display_options['fields']['relationtest']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['relationtest']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['relationtest']['hide_empty'] = 0;
  $handler->display->display_options['fields']['relationtest']['empty_zero'] = 0;
  $handler->display->display_options['fields']['relationtest']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['relationtest']['field_api_classes'] = 0;
  /* Contextual filter: Relation: endpoints (endpoints:entity_id) */
  $handler->display->display_options['arguments']['endpoints_entity_id']['id'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['table'] = 'field_data_endpoints';
  $handler->display->display_options['arguments']['endpoints_entity_id']['field'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['endpoints_entity_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['endpoints_entity_id']['not'] = 0;
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = 'baz';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'relation-integration';
  $export['relation_integration'] = $view;

  return $export;
}
