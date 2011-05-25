<?php

/**
 * Implementation of hook_strongarm().
 */
function atrium_accountant_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_account';
  $strongarm->value = '0';

  $export['comment_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_account';
  $strongarm->value = 0;

  $export['comment_anonymous_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_transaction';
  $strongarm->value = 0;

  $export['comment_anonymous_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_account';
  $strongarm->value = '3';

  $export['comment_controls_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_transaction';
  $strongarm->value = '3';

  $export['comment_controls_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_account';
  $strongarm->value = '4';

  $export['comment_default_mode_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_transaction';
  $strongarm->value = '4';

  $export['comment_default_mode_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_account';
  $strongarm->value = '1';

  $export['comment_default_order_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_transaction';
  $strongarm->value = '1';

  $export['comment_default_order_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_account';
  $strongarm->value = '50';

  $export['comment_default_per_page_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_transaction';
  $strongarm->value = '50';

  $export['comment_default_per_page_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_account';
  $strongarm->value = '0';

  $export['comment_form_location_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_transaction';
  $strongarm->value = '0';

  $export['comment_form_location_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_account';
  $strongarm->value = '1';

  $export['comment_preview_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_transaction';
  $strongarm->value = '1';

  $export['comment_preview_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_account';
  $strongarm->value = '1';

  $export['comment_subject_field_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_transaction';
  $strongarm->value = '1';

  $export['comment_subject_field_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_transaction';
  $strongarm->value = '0';

  $export['comment_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_account';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '3',
    'revision_information' => '8',
    'author' => '7',
    'options' => '9',
    'comment_settings' => '12',
    'menu' => '4',
    'book' => '6',
    'path' => '11',
    'attachments' => '10',
    'og_nodeapi' => '5',
  );

  $export['content_extra_weights_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_transaction';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '7',
    'author' => '6',
    'options' => '8',
    'comment_settings' => '10',
    'menu' => '3',
    'book' => '5',
    'path' => '11',
    'attachments' => '9',
    'og_nodeapi' => '4',
  );

  $export['content_extra_weights_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_account';
  $strongarm->value = '0';

  $export['language_content_type_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_transaction';
  $strongarm->value = '0';

  $export['language_content_type_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_account';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_transaction';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_account';
  $strongarm->value = '1';

  $export['upload_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_transaction';
  $strongarm->value = '1';

  $export['upload_transaction'] = $strongarm;
  return $export;
}
