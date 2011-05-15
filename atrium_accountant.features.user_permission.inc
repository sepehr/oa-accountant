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

  // Exported permission: create transaction content
  $permissions['create transaction content'] = array(
    'name' => 'create transaction content',
    'roles' => array(
      '0' => 'administrator',
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

  // Exported permission: delete any transaction content
  $permissions['delete any transaction content'] = array(
    'name' => 'delete any transaction content',
    'roles' => array(
      '0' => 'administrator',
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

  // Exported permission: delete own transaction content
  $permissions['delete own transaction content'] = array(
    'name' => 'delete own transaction content',
    'roles' => array(
      '0' => 'administrator',
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

  // Exported permission: edit any transaction content
  $permissions['edit any transaction content'] = array(
    'name' => 'edit any transaction content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own account content
  $permissions['edit own account content'] = array(
    'name' => 'edit own account content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own transaction content
  $permissions['edit own transaction content'] = array(
    'name' => 'edit own transaction content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
