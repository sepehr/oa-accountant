<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_accountant_user_default_permissions() {
  $permissions = array();

  // Exported permission: create account content
  $permissions['create account content'] = array(
    'name' => 'create account content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete any account content
  $permissions['delete any account content'] = array(
    'name' => 'delete any account content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own account content
  $permissions['delete own account content'] = array(
    'name' => 'delete own account content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit any account content
  $permissions['edit any account content'] = array(
    'name' => 'edit any account content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
