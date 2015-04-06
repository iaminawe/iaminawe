<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */


$url = file_create_url($content['group_intro_container']['field_brand_image']['#items'][0]['uri']);
$url = parse_url($url);
$brandimagepath = $url['path'];


$image_style = 'fullscreenwidth';

// Get the images field
$images = field_get_items('node', $node, field_divider_about);

if ($images) {
  // Get the first image only
  $image = reset($images);

  // Get the URI of the ImageCache modified version of the file (with image styles applied)
  // The URI will be in Drupal form, either 'public://…' or 'private://…'
  $final_image_uri = image_style_path($image_style, $image['uri']);

  $final_image_uri = parse_url($final_image_uri);
  $aboutimagepath = "files/styles".$final_image_uri['path'];
}

// Get the images field
$images1 = field_get_items('node', $node, field_divider_portfolio);

if ($images1) {
  // Get the first image only
  $image1 = reset($images1);

  // Get the URI of the ImageCache modified version of the file (with image styles applied)
  // The URI will be in Drupal form, either 'public://…' or 'private://…'
  $final_image_uri1 = image_style_path($image_style, $image1['uri']);

  $final_image_uri1 = parse_url($final_image_uri1);
  $portfolioimagepath = "files/styles".$final_image_uri1['path'];
}

?>
  <section id="about" name="about"></section>
  <div id="aboutwrap">
    <div class="container">
      <div class="row">
        <div class="col-lg-4 name" >
          <img class="img-responsive img-circle" src="<?php print $brandimagepath; ?>">

          <p><h1><?php print $title ?></h1></p>

          <div class="name-label">
          </div>
           <?php print render($content['group_intro_container']['field_sub_title']); ?>
          <?php print render($content['field_calls_to_action']); ?>
          <?php print render($content['field_social_links']); ?>
        </div>

        <div class="col-lg-8 name-desc">
           <?php print render($content['group_intro_container']['field_intro_sentence']); ?>

          <div class="name-zig"></div>
          <?php //print $aboutimagepath; ?>
          <div class="col-md-6">
         <?php print render($content['group_intro_container']['field_home_introduction']); ?>
         </div>
           <div class="col-md-6">
         <?php print render($content['group_intro_container']['field_i_like_to']); ?>
         </div>
         <hr />
         </div>
      </div><!-- /row -->
    </div><!-- /container -->
  </div><!-- /aboutwrap -->

  <! -- ABOUT SEPARATOR -->
  <div class="sep" data-stellar-background-ratio="0.55">
         <?php print render($content['field_divider_about']); ?>
  </div>

  <! -- BLOG SECTION -->
  <section id="blog" name="blog"></section>
  <div id="blogwrap" class="container">
      <div class="row">
        <div class="col-lg-8-offset-2 blog-teaser">
     <h2 class="blog-box-title">Blog</h2>
           <?php
          $viewName3 = 'Blog';
          $display_id = 'block_1';
          print views_embed_view($viewName3, $display_id);
        ?>

    </div>

 </div>
 </div>

  <! -- PORTFOLIO SECTION -->
  <section id="portfolio" name="portfolio"></section>
  <div id="portfoliowrap">
    <div class="container">
      <div class="row">
        <h2>RECENT PROJECTS</h2>
        <?php
          $viewName = 'home_portfolio';
          print views_embed_view($viewName);
        ?>
      </div><!-- /row -->

    </div><! --/container -->

  <! -- PORTFOLIO SEPARATOR -->
  <div class="sep"  data-stellar-background-ratio="0.5">
     <?php print render($content['field_divider_portfolio']); ?>
  </div>

  <! -- SERVICE SECTION -->
  <section id="services" name="services"></section>
  <div id="servicewrap">
    <div class="container">
      <div class="row centered">
        <h1>OPEN SOURCERY TOOLS</h1>
        <h3>Standing on the shoulders of giants.</h3>
        <p>I mainly use these three awesome tools for planning, building and deploying websites.</p>
        <div class="col-lg-4 proc">
          <div class="project-logo">
          <img src="http://dev.greggcoppen.local/profiles/iaminawe/themes/greggstrap/img/logo-drupal.jpg"/>
          </div>
          <h3>DRUPAL:BUILD </h3>
          <p>Come for the code. Stay for the community. Simply the best website building tool out there. I develop and build sites using community best practice techniques and make heavy use of git, drush, install profiles, make files and features to ensure portability between environments. </p>
        </div>
        <div class="col-lg-4 proc">
          <div class="project-logo">
         <img src="http://dev.greggcoppen.local/profiles/iaminawe/themes/greggstrap/img/logo-aegir.png"/>
         </div>
          <h3>AEGIR : DEPLOY</h3>
          <p>Deploy and manage many drupal sites (and environments) in a safe effective optimized way. Leveraging Barracuda / Octopus / Aegir for local development and remote production environments</p>
        </div>
        <div class="col-lg-4 proc">
          <div class="project-logo">
         <img src="http://dev.greggcoppen.local/profiles/iaminawe/themes/greggstrap/img/logo-redmine.png"/>
           </div>
           <h3>REDMINE : MANAGE</h3>
          <p>Helps track issues directly from Drupal and keeps budget and timelines on track, project documentation in one place and offers a trasparent view of your project and time spent at any time.</p>
        </div>

      </div><! --/row -->
    </div><! --/container -->
    <div class="container">
      <div class="row">

        <div class="col-lg-8-offset-2 centered">
          <h1>MY SERVICES</h1>
          <h3>I will help you with all your drupal development needs</h3>
          <p>I am happy to build your site myself or contribute to your existing team</p>
        </div><!-- /col-lg-8 -->

      </div><! --/row -->
<div class="row mt">
 <?php print render($content['field_services']); ?>
</div>
    </div><! --/container -->
  </div><! --/servicewrap -->

    <div id="testimonials">
    <div class="container">
      <div class="row">
        <div class="col-lg-8 col-lg-offset-2 centered">
      <?php
          $viewName2 = 'testimonials';
          $display_id = 'block_1';
          print views_embed_view($viewName2, $display_id);
        ?>
        </div><! --/col-lg-8 -->
      </div><! --/row -->
    </div><! --/container -->
  </div><! --/testimonials -->

    <! -- PORTFOLIO SEPARATOR -->
  <div class="sep"  data-stellar-background-ratio="0.5">
     <?php print render($content['field_divider_services']); ?>
  </div>

  <! -- SKILLS SECTION -->
<!--   <section id="skills" name="skills"></section>
  <div id="skillswrap">

      <div class="row">
        <div class="col-lg-8-offset-2 centered">
     <h2>Skills</h2>
     <h3>An overview of my core competencies</h3>
     <?php //print render($content['field_skills']); ?>

    </div>

 </div>
 </div> -->

  <! -- EXPERIENCE SECTION -->
  <section id="experience" name="experience"></section>
  <div id="servicewrap">

      <div class="row">
        <div class="col-lg-8-offset-2 centered">
     <h2>EDUCATION & EXPERIENCE</h2>
     <p></p>
 <?php print render($content['field_experience']); ?>
    </div>

 </div>
 </div>

  <! -- SERVICE SECTION -->
  <section id="contact" name="contact"></section>
  <! -- CONTACT SEPARATOR -->
  <div class="sep contact" data-stellar-background-ratio="0.5"></div>
  <div id="contactwrap">
    <div class="container">
      <div class="row">
        <div class="col-lg-6">
          <p>CONTACT ME RIGHT NOW!</p>
          <p>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s.</p>
          <p>
            <small>5th Avenue, 987<br/>
            38399, New York,<br/>
            USA.</small>
          </p>
          <p>
            <small>Tel. 9888-4394<br/>
            Mail. Hello@coolfolks.com<br/>
            Skype. NYCDesign
          </p>

        </div>

        <div class="col-lg-6">
          <form role="form">
            <div class="form-group">
              <label for="exampleInputName1">Your Name</label>
              <input type="email" class="form-control" id="exampleInputEmail1" placeholder="Enter name">
              <label for="exampleInputEmail1">Email address</label>
              <input type="email" class="form-control" id="exampleInputEmail1" placeholder="Enter email">
              <label for="exampleInputText1">Message</label>
              <textarea class="form-control" rows="3"></textarea>
            </div>
            <button type="submit" class="btn btn-default">Submit</button>
          </form>
        </div>

      </div><! --/row -->



    </div><!-- /container -->
  </div>



