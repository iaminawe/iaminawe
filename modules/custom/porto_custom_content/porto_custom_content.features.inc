<?php
/**
 * @file
 * porto_custom_content.features.inc
 */

/**
 * Implements hook_views_api().
 */
function porto_custom_content_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function porto_custom_content_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'carousel' => array(
      'name' => t('Carousel'),
      'base' => 'node_content',
      'description' => t('Use this to create content for an image carousel View block. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('Use this to create content for the FAQ View block. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'parallax' => array(
      'name' => t('Parallax'),
      'base' => 'node_content',
      'description' => t('Use this to create content for a Parallax block. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => t('Use this content type to create Portfolio items.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => t('Use this content type to create Team items. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'testimonials' => array(
      'name' => t('Testimonials'),
      'base' => 'node_content',
      'description' => t('Used to create content for Testimonials View block.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function porto_custom_content_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : true, "use_page" : true },
    "rdf_mapping" : []
  }');
  return $items;
}
