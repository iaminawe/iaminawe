<?php
/**
 * @file
 * logo.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function logo_field_default_fields() {
  $fields = array();

  // Exported field: 'node-logo-field_author'
  $fields['node-logo-field_author'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_author',
      'foreign keys' => array(
        'uid' => array(
          'columns' => array(
            'uid' => 'uid',
          ),
          'table' => 'users',
        ),
      ),
      'indexes' => array(
        'uid' => array(
          0 => 'uid',
        ),
      ),
      'module' => 'user_reference',
      'settings' => array(
        'referenceable_roles' => array(
          2 => '2',
        ),
        'referenceable_status' => array(
          0 => 0,
          1 => '1',
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'user_reference',
    ),
    'field_instance' => array(
      'bundle' => 'logo',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => '5',
        ),
        4 => array(
          'label' => 'above',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_author',
      'label' => 'Created By',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '5',
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '5',
      ),
      'widget_type' => 'userreference_buttons',
    ),
  );

  // Exported field: 'node-logo-field_clientref'
  $fields['node-logo-field_clientref'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_clientref',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'blog' => 0,
          'client' => 'client',
          'mobile' => 0,
          'page' => 0,
          'panel' => 0,
        ),
        'view' => array(
          'args' => array(
            0 => '',
          ),
          'display_name' => 'default',
          'view_name' => '--',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'logo',
      'default_value' => array(
        0 => array(
          '_error_element' => 'default_value_widget][field_clientref][0][nid][nid',
          'nid' => NULL,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '-1',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '-1',
        ),
        4 => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '-1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_clientref',
      'label' => 'Client',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '-1',
      'widget' => array(
        'active' => '1',
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'default_value_php' => NULL,
          'size' => '40',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '-1',
      ),
      'widget_type' => 'nodereference_autocomplete',
    ),
  );

  // Exported field: 'node-logo-field_logo'
  $fields['node-logo-field_logo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_logo',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => '_blank',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 0,
        'title' => 'none',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'logo',
      'default_value' => array(
        0 => array(
          'url' => '',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '2',
        ),
        4 => array(
          'label' => 'inline',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_logo',
      'label' => 'logo',
      'required' => FALSE,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'weight' => '2',
      'widget' => array(
        'active' => '1',
        'module' => 'link',
        'settings' => array(
          'default_value_php' => NULL,
        ),
        'type' => 'link_field',
        'weight' => '2',
      ),
      'widget_type' => 'link',
    ),
  );

  // Exported field: 'node-logo-field_logocategory'
  $fields['node-logo-field_logocategory'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_logocategory',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'vocabulary_3',
          ),
        ),
        'options_list_callback' => 'content_taxonomy_allowed_values',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'logo',
      'default_value' => array(
        0 => array(
          'value' => '',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '3',
        ),
        4 => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_logocategory',
      'label' => 'Category',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '3',
      'widget' => array(
        'active' => '1',
        'module' => 'options',
        'settings' => array(
          'default_value_php' => NULL,
          'group_parent' => '0',
          'show_depth' => 1,
        ),
        'type' => 'options_select',
        'weight' => '3',
      ),
      'widget_type' => 'options_select',
    ),
  );

  // Exported field: 'node-logo-field_logodescription'
  $fields['node-logo-field_logodescription'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_logodescription',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'text_processing' => '1',
      ),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'logo',
      'default_value' => array(
        0 => array(
          '_error_element' => 'default_value_widget][field_logodescription][0][value',
          'value' => '',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        4 => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_logodescription',
      'label' => 'logo Description',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '-2',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'rows' => '5',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '-2',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-logo-field_logoimages'
  $fields['node-logo-field_logoimages'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_logoimages',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'description_field' => '1',
        'list_default' => 1,
        'list_field' => '0',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'logo',
      'default_value' => '',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'masonrylogo',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        4 => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_logoimages',
      'label' => 'Images',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'file_directory' => 'logoimages',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'weight' => '0',
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'bar',
        ),
        'type' => 'image_image',
        'weight' => 0,
      ),
      'widget_type' => 'imagefield_widget',
    ),
  );

  // Exported field: 'node-logo-field_logotags'
  $fields['node-logo-field_logotags'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_logotags',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'vocabulary_4',
          ),
        ),
        'options_list_callback' => 'content_taxonomy_allowed_values',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'logo',
      'default_value' => '',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '4',
        ),
        4 => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_logotags',
      'label' => 'Tags',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '4',
      'widget' => array(
        'active' => '1',
        'module' => 'taxonomy',
        'settings' => array(
          'active_tags' => NULL,
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'allow',
          'default_value' => NULL,
          'default_value_php' => NULL,
          'extra_parent' => '0',
          'maxlength' => '255',
          'new_terms' => 'insert',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '4',
      ),
      'widget_type' => 'taxonomy_autocomplete',
    ),
  );

  // Exported field: 'node-logo-field_status'
  $fields['node-logo-field_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_status',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'vocabulary_5',
          ),
        ),
        'options_list_callback' => 'content_taxonomy_allowed_values',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'logo',
      'default_value' => array(
        0 => array(
          'value' => '',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '-4',
        ),
        4 => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '-4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_status',
      'label' => 'Status',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '-4',
      'widget' => array(
        'active' => '1',
        'module' => 'options',
        'settings' => array(
          'default_value_php' => NULL,
          'group_parent' => '0',
          'show_depth' => 1,
        ),
        'type' => 'options_select',
        'weight' => '-4',
      ),
      'widget_type' => 'options_select',
    ),
  );

  // Exported field: 'node-logo-field_teaserdescription'
  $fields['node-logo-field_teaserdescription'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_teaserdescription',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '200',
        'text_processing' => '0',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'logo',
      'default_value' => array(
        0 => array(
          '_error_element' => 'default_value_widget][field_teaserdescription][0][value',
          'value' => '',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-3',
        ),
        4 => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_teaserdescription',
      'label' => 'Teaser',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '-3',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'rows' => '2',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '-3',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('Client');
  t('Created By');
  t('Images');
  t('Status');
  t('Tags');
  t('Teaser');
  t('logo');
  t('logo Description');

  return $fields;
}
