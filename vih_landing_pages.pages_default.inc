<?php
/**
 * @file
 * vih_landing_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function vih_landing_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vih_employees';
  $page->task = 'page';
  $page->admin_title = 'Employees';
  $page->admin_description = '';
  $page->path = 'underviser';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Underviser',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vih_employees_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'vih_employees';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'En skole bliver aldrig bedre end de lærerkræfter, der dagligt skal sikre en inspirerende og udviklende undervisning. Vi er derfor meget bevidste om, at vi skal kunne tiltrække og fastholde nogle af de dygtigste kapaciteter på de forskellige fagområder.',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Undervisere med holdning til højskole og sport';
  $display->uuid = '918059bf-cef7-4a42-937e-4582db77aed5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-179aeec6-d3d8-4a64-9a0c-8bf16520ff47';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:11';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '179aeec6-d3d8-4a64-9a0c-8bf16520ff47';
  $display->content['new-179aeec6-d3d8-4a64-9a0c-8bf16520ff47'] = $pane;
  $display->panels['contentmain'][0] = 'new-179aeec6-d3d8-4a64-9a0c-8bf16520ff47';
  $pane = new stdClass();
  $pane->pid = 'new-4cb4dcc0-927f-450c-ba93-29f2fc27488d';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'employees_list-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Mød højskolelærerne',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4cb4dcc0-927f-450c-ba93-29f2fc27488d';
  $display->content['new-4cb4dcc0-927f-450c-ba93-29f2fc27488d'] = $pane;
  $display->panels['contentmain'][1] = 'new-4cb4dcc0-927f-450c-ba93-29f2fc27488d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vih_employees'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vih_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = '';
  $page->path = 'frontpage';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vih_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'vih_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '[site:name] | Bliv bedre til at leve livet på højskole',
        ),
        'description' => array(
          'value' => 'Vejle Idrætshøjskole tilbyder korte og lange højskolekurser. Idrætten er vores samlingspunktet i din personlige udvikling. Vejle Idrætshøjskole vil dig, og vi glæder os til at byde dig velkommen på vores højskole.',
        ),
        'keywords' => array(
          'value' => 'idrætshøjskole, højskole',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Vejle Idrætshøjskole | Udlev drømmen';
  $display->uuid = '6d900ca4-6f21-457b-8140-9a1c82c49cf9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-518deac8-367b-401b-a93b-e951f699397d';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:12';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '518deac8-367b-401b-a93b-e951f699397d';
  $display->content['new-518deac8-367b-401b-a93b-e951f699397d'] = $pane;
  $display->panels['contentmain'][0] = 'new-518deac8-367b-401b-a93b-e951f699397d';
  $pane = new stdClass();
  $pane->pid = 'new-691602ac-7118-43fb-96dd-2a0a83361bc8';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'subject_packages-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Vælg en fagpakke på de lange kurser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '691602ac-7118-43fb-96dd-2a0a83361bc8';
  $display->content['new-691602ac-7118-43fb-96dd-2a0a83361bc8'] = $pane;
  $display->panels['contentmain'][1] = 'new-691602ac-7118-43fb-96dd-2a0a83361bc8';
  $pane = new stdClass();
  $pane->pid = 'new-c2ffb059-a134-4e09-8db0-2a1ba254232a';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'employees_list-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Mød højskolelærerne',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c2ffb059-a134-4e09-8db0-2a1ba254232a';
  $display->content['new-c2ffb059-a134-4e09-8db0-2a1ba254232a'] = $pane;
  $display->panels['contentmain'][2] = 'new-c2ffb059-a134-4e09-8db0-2a1ba254232a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vih_frontpage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vih_long_courses';
  $page->task = 'page';
  $page->admin_title = 'Long courses';
  $page->admin_description = '';
  $page->path = 'langekurser';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Lange kurser',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vih_long_courses_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'vih_long_courses';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'Præsentation af de lange højskolekurser på Vejle Idrætshøjskole. På kurserne får du en træner- og lederuddannelse.',
        ),
        'abstract' => array(
          'value' => 'Præsentation af de lange højskolekurser på Vejle Idrætshøjskole. På kurserne får du en træner- og lederuddannelse.',
        ),
        'keywords' => array(
          'value' => 'Idrætshøjskole, højskolekursus, højskolekurser, instruktør, instruktøruddannelse, lederuddannelse, trænerudddannelse, uddannelse, kursusoversigt, kurser, lange, efterår, forår, vinter, speciale, linjefag, liniefag, vinterkursus, skolestart',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Lange kurser';
  $display->uuid = 'fec7142b-4d05-44ba-bacc-eb097cef7e08';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7752704b-256e-4b32-8a85-3be384f1e41c';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7752704b-256e-4b32-8a85-3be384f1e41c';
  $display->content['new-7752704b-256e-4b32-8a85-3be384f1e41c'] = $pane;
  $display->panels['contentmain'][0] = 'new-7752704b-256e-4b32-8a85-3be384f1e41c';
  $pane = new stdClass();
  $pane->pid = 'new-7d025473-0bf7-4385-b1f2-9e3b59993ec0';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'lange_kurser-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7d025473-0bf7-4385-b1f2-9e3b59993ec0';
  $display->content['new-7d025473-0bf7-4385-b1f2-9e3b59993ec0'] = $pane;
  $display->panels['contentmain'][1] = 'new-7d025473-0bf7-4385-b1f2-9e3b59993ec0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vih_long_courses'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vih_short_courses_overview';
  $page->task = 'page';
  $page->admin_title = 'Short courses Overview';
  $page->admin_description = '';
  $page->path = 'kortekurser';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Korte kurser',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vih_short_courses_overview_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'vih_short_courses_overview';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Korte kurser, sommerkurser og højskole | [site:name]',
        ),
        'description' => array(
          'value' => 'Korte kurser og sommerkurser på Vejle Idrætshøjskole. Brug din sommer og ferie på højskole. Vi har masser af højskolekurser at vælge mellem.',
        ),
        'abstract' => array(
          'value' => 'Korte kurser og sommerkurser på Vejle Idrætshøjskole. Brug din ferie på højskole. Vi har masser af højskolekurser at vælge mellem.',
        ),
        'keywords' => array(
          'value' => 'højskole, idrætshøjskole, sommerkurser, sommerkursus, højskolekurser, korte kurser, sommerhøjskole, sommer ',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Korte kurser';
  $display->uuid = 'a45f06ff-ee43-4925-aada-6b9c6779e16a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-97f1007e-abaf-46ad-b573-5678dcf1fcba';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'short_course_types-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '97f1007e-abaf-46ad-b573-5678dcf1fcba';
  $display->content['new-97f1007e-abaf-46ad-b573-5678dcf1fcba'] = $pane;
  $display->panels['contentmain'][0] = 'new-97f1007e-abaf-46ad-b573-5678dcf1fcba';
  $pane = new stdClass();
  $pane->pid = 'new-85d02709-a479-40a0-8822-09143619a425';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '85d02709-a479-40a0-8822-09143619a425';
  $display->content['new-85d02709-a479-40a0-8822-09143619a425'] = $pane;
  $display->panels['contentmain'][1] = 'new-85d02709-a479-40a0-8822-09143619a425';
  $pane = new stdClass();
  $pane->pid = 'new-03727fe1-3d75-47ad-907f-d6d25a960e51';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'short_courses-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '03727fe1-3d75-47ad-907f-d6d25a960e51';
  $display->content['new-03727fe1-3d75-47ad-907f-d6d25a960e51'] = $pane;
  $display->panels['contentmain'][2] = 'new-03727fe1-3d75-47ad-907f-d6d25a960e51';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vih_short_courses_overview'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vih_subject';
  $page->task = 'page';
  $page->admin_title = 'Subject';
  $page->admin_description = '';
  $page->path = 'fag';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Fag',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vih_subject_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'vih_subject';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'For os er idræt en måde at være sammen på og et middel til at opleve egne og andres muligheder. Idræt er personlighedsudviklende, men personlig udvikling er andet og mere end idræt, derfor lægger vi vægt på musiske, kreative og andre mere bløde fag.',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Fag - sammensæt dit eget skema';
  $display->uuid = '93cabee9-e3a1-4c03-9fd4-7c23184cadc6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2bfa2b12-d517-4f1d-a0d3-09c5cdaa4fa2';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2bfa2b12-d517-4f1d-a0d3-09c5cdaa4fa2';
  $display->content['new-2bfa2b12-d517-4f1d-a0d3-09c5cdaa4fa2'] = $pane;
  $display->panels['contentmain'][0] = 'new-2bfa2b12-d517-4f1d-a0d3-09c5cdaa4fa2';
  $pane = new stdClass();
  $pane->pid = 'new-ed75cf04-89ea-4eb5-9e3f-f94a66fbf64e';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'subjects-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ed75cf04-89ea-4eb5-9e3f-f94a66fbf64e';
  $display->content['new-ed75cf04-89ea-4eb5-9e3f-f94a66fbf64e'] = $pane;
  $display->panels['contentmain'][1] = 'new-ed75cf04-89ea-4eb5-9e3f-f94a66fbf64e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vih_subject'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vih_tour';
  $page->task = 'page';
  $page->admin_title = 'Tour';
  $page->admin_description = 'Show facilities and give a tour on the school';
  $page->path = 'rundvisning';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Rundvisning',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vih_tour_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'vih_tour';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'Velkommen til vores rundvisning på Vejle Idrætshøjskole. Vi håber du vil bruge nogle minutter på at se vores video og danne dig et overblik over vores faciliteter.',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Rundvisning';
  $display->uuid = 'ed9b0fcd-90ee-49d6-801d-35b3ad8a008a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-19e0e773-ba24-4d14-ac4a-ad722adbff44';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '19e0e773-ba24-4d14-ac4a-ad722adbff44';
  $display->content['new-19e0e773-ba24-4d14-ac4a-ad722adbff44'] = $pane;
  $display->panels['contentmain'][0] = 'new-19e0e773-ba24-4d14-ac4a-ad722adbff44';
  $pane = new stdClass();
  $pane->pid = 'new-60daec9f-6136-4a5d-b890-9143073dfda1';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'faciliteter-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Klik dig rundt i vores faciliteter',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '60daec9f-6136-4a5d-b890-9143073dfda1';
  $display->content['new-60daec9f-6136-4a5d-b890-9143073dfda1'] = $pane;
  $display->panels['contentmain'][1] = 'new-60daec9f-6136-4a5d-b890-9143073dfda1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vih_tour'] = $page;

  return $pages;

}
