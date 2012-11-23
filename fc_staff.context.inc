<?php
/**
 * @file
 * fc_staff.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fc_staff_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'staff_page';
  $context->description = '';
  $context->tag = 'Staff';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/11' => 'node/11',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-13',
        ),
        'views-profiles-block_1' => array(
          'module' => 'views',
          'delta' => 'profiles-block_1',
          'region' => 'content',
          'weight' => '-12',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Staff');
  $export['staff_page'] = $context;

  return $export;
}
