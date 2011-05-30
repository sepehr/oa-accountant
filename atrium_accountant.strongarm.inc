<?php

/**
 * Implementation of hook_strongarm().
 */
function atrium_accountant_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'atrium_activity_update_type_account';
  $strongarm->value = 1;

  $export['atrium_activity_update_type_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'atrium_activity_update_type_transaction';
  $strongarm->value = 1;

  $export['atrium_activity_update_type_transaction'] = $strongarm;
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
  $strongarm->name = 'comment_upload_transaction';
  $strongarm->value = '0';

  $export['comment_upload_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_account';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '7',
    'author' => '6',
    'options' => '8',
    'comment_settings' => '11',
    'menu' => '3',
    'book' => '5',
    'path' => '10',
    'attachments' => '9',
    'og_nodeapi' => '4',
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
  $strongarm->name = 'content_profile_use_account';
  $strongarm->value = 0;

  $export['content_profile_use_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_transaction';
  $strongarm->value = 0;

  $export['content_profile_use_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_account';
  $strongarm->value = 1;

  $export['enable_revisions_page_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_transaction';
  $strongarm->value = 1;

  $export['enable_revisions_page_transaction'] = $strongarm;
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
  $strongarm->name = 'nodeformscols_field_placements_account_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '-5',
      'has_required' => TRUE,
      'title' => 'Account name',
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'تنظیمات منو',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'اطلاعات نسخه',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'تنظیمات نظرات',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'تنظیمات مسیر',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'تنظیمات انتشار',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'اطلاعات نویسنده',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '100',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'notifications' => array(
      'region' => 'main',
      'weight' => '0.014',
      'has_required' => FALSE,
      'title' => 'باخبرسازی',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'main',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'رئوس مطالب کتاب',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'attachments' => array(
      'region' => 'main',
      'weight' => '30',
      'has_required' => FALSE,
      'title' => 'فایل‌های پیوستی',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'field_account_type' => array(
      'region' => 'main',
      'weight' => '-4',
      'has_required' => TRUE,
      'title' => 'نوع حساب',
    ),
    'field_account_number' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'شماره حساب',
      'hidden' => 0,
    ),
    'field_account_card_number' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'شماره کارت',
      'hidden' => 0,
    ),
    'field_account_holder' => array(
      'region' => 'main',
      'weight' => '-1',
      'has_required' => FALSE,
      'title' => 'دارنده حساب',
      'hidden' => 0,
    ),
    'field_account_balance' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'موجودی حساب',
      'hidden' => 0,
    ),
    'og_nodeapi' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'گروه ها',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'field_account_netbank' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'آدرس اینترنت بانک',
      'hidden' => 0,
    ),
    'body_field' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 1,
    ),
    'field_account_notes' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'یادداشت',
      'hidden' => 0,
    ),
  );

  $export['nodeformscols_field_placements_account_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_transaction_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Concern',
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'notifications' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Notifications',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Book outline',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'attachments' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'File attachments',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'field_transaction_payee' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Payee',
      'hidden' => 0,
    ),
    'field_transaction_payer' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => TRUE,
      'title' => 'Payer',
      'hidden' => 0,
    ),
    'field_transaction_account' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Related account',
    ),
    'field_transaction_project' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Related project',
      'hidden' => 0,
    ),
    'og_nodeapi' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Groups',
      'collapsed' => 0,
      'hidden' => 1,
    ),
    'field_transaction_notes' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Notes',
      'hidden' => 0,
    ),
    'field_transaction_amount' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Amount',
    ),
    'field_transaction_date' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Date',
    ),
  );

  $export['nodeformscols_field_placements_transaction_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_account';
  $strongarm->value = array();

  $export['notifications_content_type_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_transaction';
  $strongarm->value = array();

  $export['notifications_content_type_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_team_type_account';
  $strongarm->value = array();

  $export['notifications_team_type_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_team_type_transaction';
  $strongarm->value = array();

  $export['notifications_team_type_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_account';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_transaction';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_max_groups_account';
  $strongarm->value = '';

  $export['og_max_groups_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_max_groups_transaction';
  $strongarm->value = '';

  $export['og_max_groups_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_account';
  $strongarm->value = 0;

  $export['show_diff_inline_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_transaction';
  $strongarm->value = 0;

  $export['show_diff_inline_transaction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_account';
  $strongarm->value = 1;

  $export['show_preview_changes_account'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_transaction';
  $strongarm->value = 1;

  $export['show_preview_changes_transaction'] = $strongarm;
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
