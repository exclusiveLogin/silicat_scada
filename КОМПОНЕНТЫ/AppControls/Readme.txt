#########################################################
          ----------------------------------
          Advanced Application Controls pack

              for Delphi and C++ Builder
                     Version 2.4

                   TRIAL PACKAGES
          ----------------------------------

           Legal: (c) 1998-2001 Utilmind Solutions
           Email: info@appcontrols.com
             Web: http://www.appcontrols.com
                  http://www.utilmind.com
#########################################################

TABLE OF CONTENTS

    1. Welcome
        1.1 Introduction
        1.2 Components Overview
	     1.2.1 Part 1: Application Controls
	     1.2.2 Part 2: Advanced Visible Controls
        1.3 Compatiblity
        1.4 Further updates
    2. Installation
        to Delphi 2
        to Delphi 3
        to Delphi 4
        to Delphi 5
        to Delphi 6
        to C++ Builder 3
        to C++ Builder 4
        to C++ Builder 5
	common installation problems
    3. REGISTRATION
        3.1 Registration types
             3.1.1 Without source code
             3.1.2 Including source code
             3.1.3 Comments
    4. Problems and support

1. Welcome
----------------------------------------------------
The Advanced Application Controls (AppControls) is the set of 50+ top quality
multipurpose components for Borland Delphi and C++ Builder. The package
contains everything that you need to add smooth and truly professional
appearance to your software and make the application development really
rapid! All for those you usually spent days, or even weeks of hard coding
now you will be able to make for a few minutes of mouse clicking. :-)


1.1 Introduction
================
All components is completely automated, so using AppControls you do not
require to write ANY line of additional code and don't waste your time to
make cosmetic features and great software interface.
The AppControls contains components to make the forms to behave like
Applicaiton Desktop Toolbars (like taskbar or MS-Office panel) or
"magnetic" forms of WinAmp player. Components to add the
context-sensitive help without any help-files, additional custom buttons
on the form title bar and associatiated menu items in the system menu;
show smooth matrix- or win2k-based animation effects; balloon-style hints;
additional color cursors for any VCL or non-VCL object of the forms.
Your programs will be able auto-run itself on Windows startup with restoring
previous forms placements; upload and hold any files inside of the Delphi/BCB
forms; create a shortcuts to the files and read the information from existing
shortcuts; install the shell extensions / file associations into the shell;
download files from the Web via HTTP or post data to the CGI programs;
auto-upgrade itself from the Web when newest releases will available;
hook the form messages and hidden application events; hook ALL key presses,
mouse clicks and mouse movements within entire application: and a whole
bunch of others great features! See Components Overview at
http://www.appcontrols.com/overview.html for more details.

All components is highly integrated each others and extremely easy to use.
You will not have any problems with components compatibility (for example
when you changing the AlwaysOnTop property in one component, let's say,
acAppBar, the Topmost property will be changed in acFormTopmost and acFormHook
components accordingly). Since we ourselves creating the end-user software we
maximally interested in their stability and compatibility.


1.2 Components Overview
=======================

1.2.1 Part 1: Application Controls

   1. acAppAutoRun - allows to automatically execute your application on
      every Windows startup. Unlike others similar components, it have
      some additional features such like starting your application as NT
      service, showing message on Windows logon and have special event
      which informs you about automatic start. Since the acAppAutoRun is
      successor of CaptionButton and may have built-in caption button on
      form's title bar and associated menu item in the system menu.
 
   2. acAppStartCounter - used to count up the number of program startups.

   3. acAppEvents - intended for modifications of some hidden application
      properties (of the TApplication class) and hooking the application
      events (such like idle, activate / deactivate, minimize / restore
      etc). Besides usual features it's able to animate the application
      icon, hide the taskbar icon and fix the smooth animated  minimize /
      restore effect for Delphi 2/3/4. The acAppEvents hooks everything
      application-related. It can even hook ALL key presses and ALL
      mouse clicks and movements within entire application.

   4. acAppCursors - allows to specify the cursor images for non-client
      parts of your application. You can specify your own default cursor
      for all controls, custom cursors for form captions, regluar caption
      buttons, scroll bars, borders, menus and menu items and so forth...
      One component can change appearance of cursors for entire application,
      even in standard Windows dialogs (such as OpenDialog / SaveDialog),
      that you are using in your program.

   5. acOnlyOne - detects already running instances of the application
      and disallow to start of second copy of the same program.

   6. acTrayIcon - handy component for manipulating the system tray icons
      in the taskbar status area (near the clock). Allows to use the
      animated icons and contains the number of great features such like
      additional caption button on form's title bar and menu item in the
      system menu. In the Windows 2000 it supports the cartoon-style
      balloon tooltips which appears after minimizing of the form to
      the system tray (a non intrusive way to display an explanatory
      message for a status bar icon is to implement a balloon tooltip
      with its stem pointing to the icon).
	Contains many various properties which allow you to associate your
      forms with tray icons without ANY line of additional code!

   7. acShortcut - creates a shell links to files and folders in any
      location, and determines detailed information about existing shortcut
      files (.lnk).

   8. acExtAssociation - lets you to read, install or uninstall the file
      types (extension associations) to the system registry. Component
      provides with detailed information about any file types installed
      to the system (ie. pas, .wav, .doc, .gif, .html), determines location
      to executable file, argument string, icon file, icon index and two
      icon images (32x32 and 16x16) associated with specified file type.
	Also, with acExtAssociation you may install new file types or
      modify existing, changing the location of executable file or
      extension icon. For example, you can install ".yourdatafile"
      extension, specify the executable program for this file type and
      point the file icon that will associated with this file extension
      in the shell. After opening the any file with ".yourdatafile"
      extension (clicking the file icon), the application associated with
      this file type will be executed to process some data from ".yourdatafile".

   9. acAutoUpgrader - able to automatically upgrade from the Web any
      Delphi/BCB application. The AutoUpgrader will check your website for
      the newer releases of your software and, if the newer version is
      available - it will download and upgrade your application "on
      the fly". All this without SINGLE LINE of code!
	The acAutoUpgrader contains built-in Application Update Wizard,
      built-in multi-language support (it automatically recognize language
      on user's PC and show all messages in native language). However,
      if you don't want to use built-in Wizard, you can make customized
      progress-dialogs using numerous events.
	With AutoUpgrader your customers will use only latest versions
      of your software!

  10. acHTTP - allows to post and get any data from the Web via HTTP
      protocol. With acHTTP you can grab Web pages, download files and
      document, get results of the CGI programs (for example, results of
      web-based search engines / databases), using either GET and POST
      reading methods.
	The acHTTP can grab web contents either in binary and text formats,
      supports cache of Internet Explorer, can read data from password
      protected directories.

  11. acSendMail - used for sending e-mail messages via SMTP servers.
      The messages can be either in plain text or HTML format, contain
      attachments or embedded images for HTML contents. You can use the
      acSendMail for dispatching of messages by mailing lists, specifying
      multiple recipients.

  12. acAppBar - lets your forms to behave like an Application Desktop
      Toolbar - to dock on the edges of the screen like usual taskbar or
      MS-Office panel. Though appbars are usually docked on an edges of
      the user's screen, they also can float as usual windows.
	When the AppBar is anchored to the screen edge, it can be
      automatically hidden from screen when other window activated and
      popup on screen again when user point the mouse to the thin line
      on screen edge. User can dock or undock the appbar just moving it
      with mouse pointer. All automatic movements of the appbar can be
      displayed with smooth sliding effect. Component contains a whole
      bunch of neat additional features, such like docking and sizing
      rules, float restrictions, registry saver, animation effects and
      so forth...

  13. acCaptionButton - applies an additional custom button to the title
      bars of your forms + special menu item associated with this caption
      button to the system menu. Contains a lot of customization features
      such like a popup menus, multiple button states, custom tooltips,
      custom cursors etc.

  14. acAnimationEffect - adds a smooth animation effects on opening
      and closing of your windows and dialog boxes. Available effects:
      Spin, Vortex, ScatterGather, Spike, Fireworks.

  15. acWin2kEffects - enables to produce some special effects of the
      Windows 98 / 2000. You can show roll, slide and alpha-blending
      animation effects on showing and hiding windows, make your forms
      translucent, flash the caption bars and taskbar icons.

  16. acFormHelp - adds the context-sensitive help features to your
      Delphi/BCB forms without any bulky help files. It traps the
      context-sensitive help calls and creates its own popup windows from
      a control's hint. You can choose whether to interpret the hint string
      as plain text or as kind of rich text allowing you to apply different
      fonts colors, styles and line breaks. Don't worry about your hints
      - FormHelp uses the secondary part of a control's hint that is
      separated by a vertical bar "|". Mouse hints still works as well.
      With FormHelp, neither help context numbers nor extra help files are
      required to display context sensitive help. FormHelp's popup windows
      looks and feels like native context help in standard Microsoft's
      applications. Even if you're using regular help files, the FormHelp
      will be great addition and vice versa.
	In addition, it can apply the "What's This?" menu item to every
      control with context-sensitive help in the secondary part of the
      Hint property.
	For easement of context-help authoring, component contains a WYSIWYG
      help designer (drop acFormHelp onto your form and try to edit secondary
      part of Hint property of any visible control like TButton, TCheckBox or
      TGroupBox).

  17. acFormHints - applies the balloon hints for your controls instead
      of regular, rectangular hints. Balloon hints are displayed in a
      cartoon-style "balloon" with rounded corners and a stem pointing
      to the tool. They can be either single-line or multi-line. You can
      specify the default balloon direction, text alignment, degree of
      transparency and other features that affect on hint appearance.
      One component changes appearance for all hints in entire application.

  18. acFormMagnet - allows to magnetize your forms to a screen edges
      and to other forms. Forms can be attached each to others, so when
      user moves the form, others, attached forms will be moved too.
      With acFormMagnet, your forms can looks and feels like windows of
      famous WinAmp player.

  19. acFormSystemMenu - encapsulates the properties and methods of
      the system menu and allows to work with system menu of your form
      as with usual TPopupMenu component. You can disable and delete
      regular menu items, or insert custom menu items to the existing
      system menu.

  20. acFormTopmost - controls Z-order of your forms and allows to place
      your form over other windows. Since acFormTopmost is successor of
      the CaptionButton, it also able to add the custom button on form's
      title bar and associated menu item to the system menu. Add "Always
      on top" feature to your forms without any line of code!

  21. acFormRoller - allows to reduce or expand (roll up / down) Delphi/BCB
      forms without minimizing them to taskbar or system tray, giving the
      impression that the form is shrinking or expanding. Rolling process
      can be displayed with smooth animation. Since the acFormRoller is
      successor of the CaptionButton, it's also able to add the custom
      button on form's title bar and associated menu item to the system menu.

  22. acFormPlacementSaver - saves and restores the form placement and
      Z-order from system registry. Just drop this component onto your
      form and component will remember form's placement after every
      program restart.

  23. acFormSizeRestrictions - set up the restrictions to the form size
      and controls minimum and maximum tracking size of your windows.

  24. acFormResizeGrip - attaches the SizeGrip rectangle to the bottom-
      right corner of the form at run-time. This allows the user to resize
      the form dragging this grip.

  25. acFormBackground - paints the background (wallpaper) on your form
      using various gradient effects or bitmap image. Supports 3 smooth
      gradient effects and 4 styles of drawing the picture as wallpaper:
      tiled, stretched, tiled with zigzag (like bricks in the wall), and
      aligning the picture by center of form.

  26. acFormHook - hooks all windows messages (WM_xxx) that passes to your
      form and allow their handling in special events + allow users to drop
      files onto your forms. Contains number of great features such like
      disabling of regular Close button on form's title bar, placing the
      form on top over other windows, removing the title bar from form,
      allowing users to move your forms by client area, and so forth...

  27. acFileStorage - is able to store (upload) files onto your Delphi/BCB
      forms. If your software requires any additional files (.DLL's,
      WAV's, .TXT's etc), these files could be uploaded straight onto
      your form and be extracted from executable file at run-time. Also
      you can access to stored files directly from memory without extracting
      them to the disk.

  28. acWavPlayer - used for playing the system sounds or custom
      Wave-Audio (*.wav) files uploaded onto your form.

  29. acCursorLocker - able to lock the movements of the mouse pointer
      within the Delphi/BCB forms or within bounds of any control on
      these forms.

  30. acThread - extremely easy to use enhancement of standard TThread
      class. All properties and event handlers can be specified directly
      in the Object Inspector.


1.2.2 Part 2: Advanced Visible Controls

  31. acLabel - improved label control, which able to show the shadow and
      highlight effects, twinkle, and change the appearance when the mouse
      hovers or clicks the label.

  32. acURLLabel - the text label used to redirect user to the Web page,
      or to compose email message to specified recipient, when user clicks
      this label.

  33. acRichLabel - the label which able to show the rich text. Some words
      or characters can be bold, italic or underlined, and you can specify
      the custom colors for various parts of text. At design-time you can
      edit the rich text using WYSIWYG editor for Caption property.
      The rich text used in this controls is not standard RTF or HTML,
      however it supports kind of tags, which also used in the context-
      sensitive help of the acFormHelp component.

  34. acCheckBox - improved TCheckBox, which supports multi-line captions
      and able to have non-3D (flat) border for the checkbox. Contains all
      needed properties for flexible adjustment of multi-line text within
      client area of control and alignment within its container.

  35. acRadioButton - improved TRadioButton, which supports multi-line
      captions and able to have non-3D (flat) border for the radio button.
      Contains all needed properties for flexible adjustment of multi-line
      text within client area of control and alignment within its container.

  36. acCheckGroupBox - easy way to implement to your forms a group box
      with a checkbox instead of usual caption. When the checkbox is
      checked, all controls within a group box is enabled. When user
      uncheck the checkbox, all controls within a group became
      automatically disabled.

  37. acDragPanel - panel which lets user to move and dock the owner form
      dragging the panel that covers this form; or simply move the panel
      within its container. Works either with normal or MDI forms.
      The DragPanel is great addition to acAppBar.

  38. acButton - improved TButton, which supports multi-line caption and
      can be aligned within its container.

  39. acBitBtn - improved TBitBtn (button with the bitmap glyph), which
      supports multi-line captions, custom background colors and can be
      aligned within its container.

  40. acEdit - enhanced TEdit control. Can align the text by center or
      right edge control, able to have custom button with bitmap image,
      can automatically validate entered characters.

  41. acNumberEdit - enhanced edit control used for input of the numerical
      values in decimal, hexadecimal and binary format. It can align the
      text by center or right edge control and able to have the button
      with bitmap image, at the right side of edit control.

  42. acIPEdit - control for editing the IP addresses. This is 100% native
      VCL component and contains a little bit more features than ActiveX
      "IPAddress".

  43. acMRUComboBox - the edit control with the drop down list which can
      save and restore the MRU history list (list of most recently used
      lines) from the registry. When user type the text, the combobox can
      automatically complete the input with the text taken from the history
      list.

  44. acTreeComboBox - ... in AppControls v2.3

  45. acTreeView - just slightly improved TTreeView control. Generally
      it's intended for those who still develop the apps using Delphi 2/3
      or BCB 1/3. The acTreeView compatible with any 32-bit Delphi/BCB
      versions, but supports ALL features of TTreeView for Delphi 5/6.
      There is only one additional thing, is the possibility to choose
      custom cursor images for non-client parts of TreeView control - border,
      horizontal and vertical scrollbars.

  46. acListView - the advanced ListView which can automatically sort
      columns, displaying the arrow-style sorting mark, which represents
      the sorting direction (like in the MS-Outlook). It can sorts items
      automatically and does not require any additional programming.
      However, the custom sorting are still supported. When the AutoSort
      is True, the acListView recognizes the format of list items and can
      automatically sort the text, numerical and date/time values.
      Contains a lot of additional features, such like popup menus for the
      header columns, tooltips for the list items which doesn't fits the
      column size (complete customization of tooltip appearance and
      placement), custom cursors for various non-client parts of ListView.
      It's also able to automatically save and restore sorting rules on exit
      / startup of your program.
      If you're still using old versions of Delphi / C++ Builder 2 or 3 you
      will also pleasantly surprised that the acListView supports features
      which become available in higher Delphi versions. This is grid lines,
      row selecting, flat scrollbars, hot tracking and hottrack styles and
      so forth...

  47. acSystemImageList - gives access to the system image list. That's
      the image list which all icons (32x32 or 16x16) for various file
      types that Explorer uses. All these icons represents the files
      within the Windows shell.

  48. acStatusControl - used to insert any visible control (button, panel,
      checkbox etc) to the section of the status bar

  49. acSystemInfo - provides detailed system information such like machine
      name, current user name and organization, CPU info and frequency of
      main processor, serial number of hard disk, DirectX info, pathes to
      the system directories, executable file for default browser, current
      screen saver, screen resolution and color mode and so forth.

  50. acDateTimeCalc - calculates number of years, months, days, hours,
      minutes, seconds and milliseconds between two dates specified by
      BeginTime and EndTime properties.

  51. acUnixCrypt - ultra fast crypt implementation for Delphi/C++
      Builder. It works exactly as crypt(key, salt) Unix command (one-way
      encryption algorithm), which used to encrypt passwords in .htpasswd
      files in password protected Web directories.

  52. acControlKeyState - can determinate states of -Caps, -Num, -Scroll,
      -Control, -Shift keys and change their conditions by blinking the
      LEDs on the keypad.

  53. acDesktopWallpaper - will implement all needed functionality to make
      operations with the Desktop Wallpapers neat and simple.

  54. acQuickAboutBox - applies simple but cool looking "about" box for
      your freeware and shareware application. Just drop component onto
      your main form, set several properties such like program name, short
      description (as rich text), copyright notice, email address and URL
      to your website and About box is done. To show it - just call Execute
      method.


1.3 Compatibility
=================
AppControls compatible with Delphi 2/3/4/5/6 and BCB 3/4/5 and has been
tested on Win95, Win95OSR2, Win98, NT4, Win2K and WinME.


1.4 Further updates
===================
Actually the AppControls pack contains 53 components. However, we contantly
updating the package and adding more useful utilities and new great features
to existing components. If you have any suggestions to help us to improve
the AppControls - please contact us (info@appcontrols.com) and never
hesitate to do this for any question.


2. Installation
----------------------------------------------------
Trial version includes compiled units, ready for testing packages,
latest help-file, installation instructions / contact information
in Readme.txt. 

The only difference between the unregistered and
registered versions is that the registered one has
not message box with remind to register and works
without Delphi (C++ Builder) running.

to Delphi 2
===========
 1. Create "..\Lib\AppControls" directory.
 2. Unzip files and copy them to "Delphi 2\Lib\AppControls".
 3. Start Delphi2 IDE.
 4. Select "Component \ Install..." menu item.
 5. Press "Add" button and select "_AACReg.pas" file.
 6. Rebuild library.

to Delphi 3
===========
 1. Create "..\Lib\AppControls" directory.
 2. Unzip files and copy them to "Delphi 3\Lib\AppControls".
 3. Start Delphi3 IDE.
 4. Open "AppControlsD3.dpk" file.
 5. Install package to the components palette ("Install" button).

to Delphi 4
===========
 1. Create "..\Lib\AppControls" directory.
 2. Unzip files and copy them to "Delphi 4\Lib\AppControls".
 3. Start Delphi4 IDE.
 4. Open "AppControlsD4.dpk" file.
 5. Install package to the components palette ("Install" button).

to Delphi 5
===========
 1. Create "..\Lib\AppControls" directory.
 2. Unzip files and copy them to "Delphi 5\Lib\AppControls".
 3. Start Delphi5 IDE.
 4. Open "AppControlsD5.dpk" file.
 5. Install package to the components palette ("Install" button).

to Delphi 6
===========
 1. Create "..\Lib\AppControls" directory.
 2. Unzip files and copy them to "Delphi 6\Lib\AppControls".
 3. Start Delphi 6 IDE.
 4. Open "AppControlsD6.dpk" file.
 5. Install package to the components palette ("Install" button).

to C++ Builder 3
================
 1. Create "..\Lib\AppControls" directory.
 2. Unzip files and copy them to "..\Lib\AppControls".
 3. Start C++ Builder 3 IDE.
 4. Open "AppControlsCB3.bpk" file.
 5. Select "Project \ Make AppControlsCB3" menu item.
 6. Select "Component \ InstallPackages" menu item.
 7. Press "Add" button and select "AppControlsCB3.bpl" file.

to C++ Builder 4
================
 1. Create "..\Lib\AppControls" directory.
 2. Unzip files and copy them to "..\Lib\AppControls".
 3. Start C++ Builder 4 IDE.
 4. Open "AppControlsCB4.bpk" file.
 5. Install package to the components palette ("Install" button).

to C++ Builder 5
================
 1. Create "..\Lib\AppControls" directory.
 2. Unzip files and copy them to "..\Lib\AppControls".
 3. Start C++ Builder 5 IDE.
 4. Open "AppControlsCB5.bpk" file.
 5. Install package to the components palette ("Install" button).

Common installation problems
============================
Q. If I compile my project using component in 'App Controls' pallete
   I've got the message: 'Fatal error ... file not found:
   'Dsgnlntf.dcu', why? I used Delphi 5.
A. DsgnIntf.dcu(.pas) is part of Borland Visual Component Library
   and we don't have permission to distribute it. Since this file
   included to Delphi 5 deployment, you just need to include
   "$(Delphi)\Sources\Toolsapi" directory to the "Library Pathes".
   To add new search path for compiler - select "Tools\Environment
   Options" menu item in the Delphi IDE, select "Library" tab, click
   "..." button near "Library path" edit box, then add new path
   "$(Delphi)\Sources\Toolsapi".
   To find out more about "dsgnintf" unit, please check out
   "DSGNINTF and deployment" topic in the "Readme.txt" file,
   supplyed with Delphi 5 (Delphi Readme).


3. REGISTRATION
----------------------------------------------------
Advanced Application Controls is SHAREWARE.
This means that you can try it out for free, but if you like it and want
to use it you have to register it with the author. Before continue read and
accept License Agreement (license.txt) please.

The only difference between the UNREGISTERED and REGISTERED versions is that
the registered one has not message box with remind to register and works
without Delphi (C++ Builder) running. You can also purchase the SOURCE CODE,
if you would like to have it, and be able to modify and compile the AppControls
on ANY 32bit version of Delphi or C++ Builder.

So, if you would like to use the AppControls and receive full, unrestricted
version, priority support or even source code - you have to purchase proper
license.

3.1 Registration types
======================
All prices in US dollars. Registering entitles you to unlimited support
via E-Mail, minor version updates indefinitely and major version updates
for 6 month from date of purchase.

3.1.1 Full, unrestricted version without source code:
=====================================================

 Single developer license:
  https://secure.element5.com/register.html?productid=139996 - $139,95

 2 developers license (save 20%):
  https://secure.element5.com/register.html?productid=139997 - $222,22

 3 developers license (save 25%):
  https://secure.element5.com/register.html?productid=139998 - $333,33

 Site license:
  https://secure.element5.com/register.html?productid=139999 - $699,95

 Educational site license:
  https://secure.element5.com/register.html?productid=140001 - $419,95

3.1.2 Full version including 100% Source Code:
=====================================================

 Single developer license:
  https://secure.element5.com/register.html?productid=140003 - $349,95

 2 developers license (save 20%):
  https://secure.element5.com/register.html?productid=140005 - $559,95

 3 developers license (save 25%):
  https://secure.element5.com/register.html?productid=140006 - $799,95

 Site license:
  https://secure.element5.com/register.html?productid=140007 - $1749,95

 Educational site license:
  https://secure.element5.com/register.html?productid=140008 - $1049,95

3.1.3 Comments
==============

 1. Site license covers a single organisation in one location (building
    complex). If you buy a site license, you may use the software in
    unlimited number of your company's computers withing this area.
    Site license is very cost-effective if you have many computers (many
    software developers).
 2. Educational site license - same as site license described above but
    for educational institutions (schools, universities etc).
 3. World-wide license covers all computers of single organisation
    world-wide. If your company has many branches even with thousands of
    computers, world license covers them all. See License Agreement
    (license.txt) or contact us for more details.


4. Problems and support
----------------------------------------------------
If you have any problems during the setup or using this
software product, please visit the support area of our website
at http://www.appcontrols.com or contact us: info@appcontrols.com

    
Good Luck!

Aleksey Kuznetsov,
Founder, UtilMind Solutions
aleksey@utilmind.com
http://www.utilmind.com
http://www.appcontrols.com
