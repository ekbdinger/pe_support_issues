<?php
/**
 * @file
 * pe_support_issues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pe_support_issues_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pe_support_issues_node_info() {
  $items = array(
    'pe_support_issue' => array(
      'name' => t('PE Support Issue'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
