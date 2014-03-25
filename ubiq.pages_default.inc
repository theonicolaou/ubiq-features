<?php
/**
 * @file
 * ubiq.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ubiq_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Video Gallery Item',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'video_gallery' => 'video_gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'ubiq_news';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f2ee9318-d165-4752-855d-88cddfdccf64';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0d5cf890-6cdf-4570-9993-cc6e25fc3c3f';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h5>LATEST VIDEOS FROM YOUTUBE</h5>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0d5cf890-6cdf-4570-9993-cc6e25fc3c3f';
    $display->content['new-0d5cf890-6cdf-4570-9993-cc6e25fc3c3f'] = $pane;
    $display->panels['bottom'][0] = 'new-0d5cf890-6cdf-4570-9993-cc6e25fc3c3f';
    $pane = new stdClass();
    $pane->pid = 'new-43633177-4140-4524-b27f-47792ddec19e';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'video_gallery_carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '43633177-4140-4524-b27f-47792ddec19e';
    $display->content['new-43633177-4140-4524-b27f-47792ddec19e'] = $pane;
    $display->panels['bottom'][1] = 'new-43633177-4140-4524-b27f-47792ddec19e';
    $pane = new stdClass();
    $pane->pid = 'new-acb1d615-d924-4bd5-9118-2a8034c8ca4a';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="http://youtube.com">View our channel</a>',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'theo_is_happy',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'acb1d615-d924-4bd5-9118-2a8034c8ca4a';
    $display->content['new-acb1d615-d924-4bd5-9118-2a8034c8ca4a'] = $pane;
    $display->panels['bottom'][2] = 'new-acb1d615-d924-4bd5-9118-2a8034c8ca4a';
    $pane = new stdClass();
    $pane->pid = 'new-b8a52c52-4cef-4a8c-a99b-7c339a63487e';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'video_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b8a52c52-4cef-4a8c-a99b-7c339a63487e';
    $display->content['new-b8a52c52-4cef-4a8c-a99b-7c339a63487e'] = $pane;
    $display->panels['top'][0] = 'new-b8a52c52-4cef-4a8c-a99b-7c339a63487e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-b8a52c52-4cef-4a8c-a99b-7c339a63487e';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Campaign Case Study page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'campaign_case_studies' => 'campaign_case_studies',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'ubiq_news';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd4f01e9a-aab5-4715-a3a1-5f9111d44345';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a81b070a-6974-46c2-94a0-7769502d1851';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'campaign_case_study_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a81b070a-6974-46c2-94a0-7769502d1851';
    $display->content['new-a81b070a-6974-46c2-94a0-7769502d1851'] = $pane;
    $display->panels['bottom'][0] = 'new-a81b070a-6974-46c2-94a0-7769502d1851';
    $pane = new stdClass();
    $pane->pid = 'new-c319a2a3-765f-49f7-b9b9-047e1b333d6d';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'most_viewed_case_studies';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Most Viewed Case Studies',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c319a2a3-765f-49f7-b9b9-047e1b333d6d';
    $display->content['new-c319a2a3-765f-49f7-b9b9-047e1b333d6d'] = $pane;
    $display->panels['bottom'][1] = 'new-c319a2a3-765f-49f7-b9b9-047e1b333d6d';
    $pane = new stdClass();
    $pane->pid = 'new-71b69114-726d-4d30-bb27-9a15bf2d1dec';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'case_studies_logo_carosuel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '71b69114-726d-4d30-bb27-9a15bf2d1dec';
    $display->content['new-71b69114-726d-4d30-bb27-9a15bf2d1dec'] = $pane;
    $display->panels['bottom'][2] = 'new-71b69114-726d-4d30-bb27-9a15bf2d1dec';
    $pane = new stdClass();
    $pane->pid = 'new-d95c92f3-9bee-41c4-9906-e1e88dabcc16';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'case_study_slideshow';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd95c92f3-9bee-41c4-9906-e1e88dabcc16';
    $display->content['new-d95c92f3-9bee-41c4-9906-e1e88dabcc16'] = $pane;
    $display->panels['top'][0] = 'new-d95c92f3-9bee-41c4-9906-e1e88dabcc16';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ubiq_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'case_studies';
  $page->task = 'page';
  $page->admin_title = 'Case Studies';
  $page->admin_description = '';
  $page->path = 'case-studies';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_case_studies_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'case_studies';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Case Studies Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'ubiq_news';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Campaign Case Studies - The Space To Be Creative';
  $display->uuid = '3ed53543-3bfe-4e04-b0ed-fad5cd32140d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fe52439f-a28e-4363-be8d-24306e8cfb8d';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'Sed et lacus augue. Fusce dui nunc, posuere auctor sem quis, adipiscing molestie nulla. Phasellus pellentesque, felis vitae blandit dictum, ligula eros volutpat ligula, ac feugiat sem enim ut sem. Suspendisse cursus et sem et condimentum. Donec a vulputate dui, et gravida odio. Nam eget sapien et purus mattis commodo at eu metus. Suspendisse consequat rhoncus cursus. Praesent sed nunc eu magna bibendum bibendum in nec turpis. Etiam placerat ac erat in rhoncus. Donec faucibus in sem sed condimentum. Phasellus nec justo sit amet justo posuere feugiat.',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fe52439f-a28e-4363-be8d-24306e8cfb8d';
    $display->content['new-fe52439f-a28e-4363-be8d-24306e8cfb8d'] = $pane;
    $display->panels['bottom'][0] = 'new-fe52439f-a28e-4363-be8d-24306e8cfb8d';
    $pane = new stdClass();
    $pane->pid = 'new-7c436eec-7d78-4aef-b88a-45f36d3af076';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'most_viewed_case_studies';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7c436eec-7d78-4aef-b88a-45f36d3af076';
    $display->content['new-7c436eec-7d78-4aef-b88a-45f36d3af076'] = $pane;
    $display->panels['bottom'][1] = 'new-7c436eec-7d78-4aef-b88a-45f36d3af076';
    $pane = new stdClass();
    $pane->pid = 'new-89bff303-a757-41da-9953-f99e20349e79';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'case_studies_logo_carosuel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '89bff303-a757-41da-9953-f99e20349e79';
    $display->content['new-89bff303-a757-41da-9953-f99e20349e79'] = $pane;
    $display->panels['bottom'][2] = 'new-89bff303-a757-41da-9953-f99e20349e79';
    $pane = new stdClass();
    $pane->pid = 'new-a3331618-994f-45ab-b094-1ae2b9b6521d';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'campaign_case_studies_carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3331618-994f-45ab-b094-1ae2b9b6521d';
    $display->content['new-a3331618-994f-45ab-b094-1ae2b9b6521d'] = $pane;
    $display->panels['top'][0] = 'new-a3331618-994f-45ab-b094-1ae2b9b6521d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7c436eec-7d78-4aef-b88a-45f36d3af076';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['case_studies'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'ubiq_news';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5b7e6308-0cba-4932-b70b-1a9c0e71a08e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a8f4623-c244-498d-af53-d5a7936ac27e';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'home_client_testimonial';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'What Our Clients Say',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a8f4623-c244-498d-af53-d5a7936ac27e';
    $display->content['new-0a8f4623-c244-498d-af53-d5a7936ac27e'] = $pane;
    $display->panels['bottom'][0] = 'new-0a8f4623-c244-498d-af53-d5a7936ac27e';
    $pane = new stdClass();
    $pane->pid = 'new-d91723c9-e273-40c4-bf92-38911f1913af';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'home_cabbie_testimonial';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'What Our Cabbies Say',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd91723c9-e273-40c4-bf92-38911f1913af';
    $display->content['new-d91723c9-e273-40c4-bf92-38911f1913af'] = $pane;
    $display->panels['bottom'][1] = 'new-d91723c9-e273-40c4-bf92-38911f1913af';
    $pane = new stdClass();
    $pane->pid = 'new-52380537-9430-452e-a0e0-49ce3ce6625c';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'taxi_formats_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Innovators of Taxi Formats',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '52380537-9430-452e-a0e0-49ce3ce6625c';
    $display->content['new-52380537-9430-452e-a0e0-49ce3ce6625c'] = $pane;
    $display->panels['bottom'][2] = 'new-52380537-9430-452e-a0e0-49ce3ce6625c';
    $pane = new stdClass();
    $pane->pid = 'new-12edb7cd-cf4b-438f-9d4e-a6ad88ec1b20';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'home_generic_promotion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '12edb7cd-cf4b-438f-9d4e-a6ad88ec1b20';
    $display->content['new-12edb7cd-cf4b-438f-9d4e-a6ad88ec1b20'] = $pane;
    $display->panels['bottom'][3] = 'new-12edb7cd-cf4b-438f-9d4e-a6ad88ec1b20';
    $pane = new stdClass();
    $pane->pid = 'new-38d25955-b0b8-4e5f-8005-9f22b0f50c4f';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Homepage Hero Image',
      'title' => '',
      'body' => 'this is where the hero image will go',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '38d25955-b0b8-4e5f-8005-9f22b0f50c4f';
    $display->content['new-38d25955-b0b8-4e5f-8005-9f22b0f50c4f'] = $pane;
    $display->panels['top'][0] = 'new-38d25955-b0b8-4e5f-8005-9f22b0f50c4f';
    $pane = new stdClass();
    $pane->pid = 'new-349690bd-6887-4629-a39f-4a4d83a368a4';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'home_case_study_carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '349690bd-6887-4629-a39f-4a4d83a368a4';
    $display->content['new-349690bd-6887-4629-a39f-4a4d83a368a4'] = $pane;
    $display->panels['top'][1] = 'new-349690bd-6887-4629-a39f-4a4d83a368a4';
    $pane = new stdClass();
    $pane->pid = 'new-fec092b6-3ba1-463e-bd8b-476d7c25c135';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'home_video_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fec092b6-3ba1-463e-bd8b-476d7c25c135';
    $display->content['new-fec092b6-3ba1-463e-bd8b-476d7c25c135'] = $pane;
    $display->panels['top'][2] = 'new-fec092b6-3ba1-463e-bd8b-476d7c25c135';
    $pane = new stdClass();
    $pane->pid = 'new-41488be5-5ce9-41e8-b39e-5974b870a9a5';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'home_twitter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '41488be5-5ce9-41e8-b39e-5974b870a9a5';
    $display->content['new-41488be5-5ce9-41e8-b39e-5974b870a9a5'] = $pane;
    $display->panels['top'][3] = 'new-41488be5-5ce9-41e8-b39e-5974b870a9a5';
    $pane = new stdClass();
    $pane->pid = 'new-13e6ee5d-6878-48b6-a6f5-404b5999579b';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'home_news_pr';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '13e6ee5d-6878-48b6-a6f5-404b5999579b';
    $display->content['new-13e6ee5d-6878-48b6-a6f5-404b5999579b'] = $pane;
    $display->panels['top'][4] = 'new-13e6ee5d-6878-48b6-a6f5-404b5999579b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-38d25955-b0b8-4e5f-8005-9f22b0f50c4f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'news';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'News',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'news',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'ubiq_news';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'taxi advertising news - whats new outdoors';
  $display->uuid = 'e9723dc0-dc75-42c1-8040-eb4190785eac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e7eddea0-9855-4c2e-8cdd-9a222093fae7';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'news_items';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7eddea0-9855-4c2e-8cdd-9a222093fae7';
    $display->content['new-e7eddea0-9855-4c2e-8cdd-9a222093fae7'] = $pane;
    $display->panels['bottom'][0] = 'new-e7eddea0-9855-4c2e-8cdd-9a222093fae7';
    $pane = new stdClass();
    $pane->pid = 'new-6e433c87-dc02-426f-b224-14107d61454a';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'news_items_without_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '4',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6e433c87-dc02-426f-b224-14107d61454a';
    $display->content['new-6e433c87-dc02-426f-b224-14107d61454a'] = $pane;
    $display->panels['bottom'][1] = 'new-6e433c87-dc02-426f-b224-14107d61454a';
    $pane = new stdClass();
    $pane->pid = 'new-c17eaea9-66cd-4bed-80c5-f542b278cb59';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'featured_news_item';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c17eaea9-66cd-4bed-80c5-f542b278cb59';
    $display->content['new-c17eaea9-66cd-4bed-80c5-f542b278cb59'] = $pane;
    $display->panels['top'][0] = 'new-c17eaea9-66cd-4bed-80c5-f542b278cb59';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'taxi_formats';
  $page->task = 'page';
  $page->admin_title = 'Taxi Formats';
  $page->admin_description = '';
  $page->path = 'taxi-formats';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Taxi Formats Panel',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_taxi_formats_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'taxi_formats';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Taxi Formats',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'ubiq_news';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2401aab6-c9f9-4c2c-be7a-f31f43e885a0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-89ea4c83-1922-4ed9-96a3-baa4fd3483d8';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'taxi_formats_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '89ea4c83-1922-4ed9-96a3-baa4fd3483d8';
    $display->content['new-89ea4c83-1922-4ed9-96a3-baa4fd3483d8'] = $pane;
    $display->panels['bottom'][0] = 'new-89ea4c83-1922-4ed9-96a3-baa4fd3483d8';
    $pane = new stdClass();
    $pane->pid = 'new-eddc5f5b-76ef-4a89-9345-9d6b5928b54f';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'taxi_formatt';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_string_1.html_safe',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eddc5f5b-76ef-4a89-9345-9d6b5928b54f';
    $display->content['new-eddc5f5b-76ef-4a89-9345-9d6b5928b54f'] = $pane;
    $display->panels['top'][0] = 'new-eddc5f5b-76ef-4a89-9345-9d6b5928b54f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['taxi_formats'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'video_gallery';
  $page->task = 'page';
  $page->admin_title = 'Video Gallery';
  $page->admin_description = '';
  $page->path = 'video-gallery';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_video_gallery_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'video_gallery';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Video Gallery',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'ubiq_news';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7478e138-62b4-4f52-a2b4-5b209c1742de';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1024b03d-2613-4923-9835-d968aacbba86';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'video_gallery_carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1024b03d-2613-4923-9835-d968aacbba86';
    $display->content['new-1024b03d-2613-4923-9835-d968aacbba86'] = $pane;
    $display->panels['bottom'][0] = 'new-1024b03d-2613-4923-9835-d968aacbba86';
    $pane = new stdClass();
    $pane->pid = 'new-ec066276-5860-4939-9c85-1340c65ff06e';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'video_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec066276-5860-4939-9c85-1340c65ff06e';
    $display->content['new-ec066276-5860-4939-9c85-1340c65ff06e'] = $pane;
    $display->panels['top'][0] = 'new-ec066276-5860-4939-9c85-1340c65ff06e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['video_gallery'] = $page;

  return $pages;

}
