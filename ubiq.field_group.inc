<?php
/**
 * @file
 * ubiq.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ubiq_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lhs|node|taxi_formats|form';
  $field_group->group_name = 'group_lhs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'taxi_formats';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'left-hand-side',
    'weight' => '1',
    'children' => array(
      0 => 'field_featured_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-lhs field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_lhs|node|taxi_formats|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rhs|node|taxi_formats|form';
  $field_group->group_name = 'group_rhs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'taxi_formats';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'right-hand-side',
    'weight' => '3',
    'children' => array(
      0 => 'field_icon',
      1 => 'field_bullet_points',
      2 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-rhs field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rhs|node|taxi_formats|form'] = $field_group;

  return $export;
}
