<?php
/**
 * @file
 * relation_integration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function relation_integration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function relation_integration_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function relation_integration_node_info() {
  $items = array(
    'foo' => array(
      'name' => t('foo'),
      'base' => 'node_content',
      'description' => t('Test for views and relation integration.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
