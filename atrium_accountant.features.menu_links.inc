<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function atrium_accountant_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/transaction
  $menu_links['navigation:node/add/transaction'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/transaction',
    'router_path' => 'node/add/transaction',
    'link_title' => 'Transaction',
    'options' => array(
      'attributes' => array(
        'title' => 'An expense or income transaction in the simple accounting system.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Transaction');


  return $menu_links;
}
