<?php

/**
* Implementation of hook_default_page_manager_pages().
*/
function chroma_template_defaults_default_page_manager_handlers() 
{
  $handlers = array();
  $path = drupal_get_path('module', 'chroma_template_defaults') . '/pages';
  $files = drupal_system_listing('/\.inc$/', $path, 'name', 0);
  foreach($files as $file) {
    include_once($file->uri);
    $handlers[$handler->name] = $handler;
   }
  return $handlers;
}
