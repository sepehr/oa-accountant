<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function atrium_accountant_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:accounts
  $menu_links['features:accounts'] = array(
    'menu_name' => 'features',
    'link_path' => 'accounts',
    'router_path' => 'accounts',
    'link_title' => 'Accounts',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Accounts');


  return $menu_links;
}
