<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_accountant_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'account_listing';
  $context->description = '';
  $context->tag = 'Accountant';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'account' => 'account',
        'transaction' => 'transaction',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'accounts' => 'accounts',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-accounts-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-accounts-page_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'accounting',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Accountant');

  $export['account_listing'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'transaction_listing';
  $context->description = '';
  $context->tag = 'Accountant';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'account' => 'account',
        'transaction' => 'transaction',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'transactions' => 'transactions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-transactions-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-transactions-page_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'accounting',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Accountant');

  $export['transaction_listing'] = $context;
  return $export;
}
