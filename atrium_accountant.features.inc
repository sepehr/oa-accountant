<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_accountant_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function atrium_accountant_node_info() {
  $items = array(
    'account' => array(
      'name' => t('Financial Account'),
      'module' => 'features',
      'description' => t('An account for the simple accountant system that can be a Bank, Cash, Liability, etc. typed account.'),
      'has_title' => '1',
      'title_label' => t('Account name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'transaction' => array(
      'name' => t('Transaction'),
      'module' => 'features',
      'description' => t('An expense or income transaction in the simple accounting system.'),
      'has_title' => '1',
      'title_label' => t('Concern'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function atrium_accountant_views_api() {
  return array(
    'api' => '2',
  );
}
