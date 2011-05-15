<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_accountant_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function atrium_accountant_node_info() {
  $items = array(
    'account' => array(
      'name' => t('Account'),
      'module' => 'features',
      'description' => t('An account for the simple accountant system that can be a Bank Account or Cash Account.'),
      'has_title' => '1',
      'title_label' => t('Account name'),
      'has_body' => '1',
      'body_label' => t('Notes'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'transaction' => array(
      'name' => t('Transaction'),
      'module' => 'features',
      'description' => t('An expense or income transaction in the simple accounting system.'),
      'has_title' => '1',
      'title_label' => t('Transaction amount'),
      'has_body' => '1',
      'body_label' => t('Notes'),
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
