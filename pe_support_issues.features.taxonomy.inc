<?php
/**
 * @file
 * pe_support_issues.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pe_support_issues_taxonomy_default_vocabularies() {
  return array(
    'product' => array(
      'name' => 'Product',
      'machine_name' => 'product',
      'description' => 'This is used for the my.ecw.com category as well',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
