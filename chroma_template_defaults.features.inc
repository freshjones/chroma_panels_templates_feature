<?php
/**
 * @file
 * chroma_template_defaults.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function chroma_template_defaults_ctools_plugin_api($module = NULL, $api = NULL) {
  if (
  		($module == "strongarm" && $api == "strongarm") ||
  		($module == 'page_manager' && $api == 'pages_default')
  	 ) 
  {
    return array("version" => "1");
  }
}