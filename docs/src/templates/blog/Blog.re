module MaterialuiStyles = Materialui.Styles.Make({
  type theme = Materialui.Styles.theme;
  type styles('a) = {
    .
    "mainGrid": 'a,
  };
  type props = unit;
});

let useStyles = MaterialuiStyles.make(theme => {
  open Materialui.Styles;

  {
    "mainGrid": () => Style.(make([
      marginTop(Theme.spacing1(theme, 3)->px),
    ])),
  }
});

type post = {
  title: string,
  date: string,
  description: string,
};

let sections: list(Blog_Header.section) = [
  { title: "Technology", url: "#" },
  { title: "Design", url: "#" },
  { title: "Culture", url: "#" },
  { title: "Business", url: "#" },
  { title: "Politics", url: "#" },
  { title: "Opinion", url: "#" },
  { title: "Sciencse", url: "#" },
  { title: "Health", url: "#" },
  { title: "Style", url: "#" },
  { title: "Travel", url: "#" },
];

let featuredPosts: list(Blog_FeaturedPost.data) = [
  {
    title: "Featured post",
    date: "Nov 12",
    description: "This is a wider card with supporting text below as a natural lead in to additional content",
    image: "https://source.unsplash.com/random",
    imageText: "Image Text",
  },
  {
    title: "Post post",
    date: "Nov 11",
    description: "This is a wider card with supporting text below as a natural lead in to additional content",
    image: "https://source.unsplash.com/random",
    imageText: "Image Text",
  },
];

[@bs.module "./blog-post.1.md"]
external post1: string = "default";
[@bs.module "./blog-post.2.md"]
external post2: string = "default";
[@bs.module "./blog-post.3.md"]
external post3: string = "default";
let posts = [post1, post2, post3];

let mainFeaturedPost: Blog_MainFeaturedPost.data = {
  title: "Title of a longer featured blog post",
  description: "Multiple lines of text that form the lede, informing new readers quickly and efficiently about what's most interesting in this post's contents.",
  image: "https://source.unsplash.com/random",
  imgText: "main image description",
  linkText: "Continue reading...",
};

let sidebar: Blog_Sidebar.data = {
  title: "About",
  description: "Etiam porta sem malesuada magna mollis euismod. Cras mattis consectetur purus sit amet fermentum. Aenean lacinia bibendum nulla sed consectetur.",
  archives: [
    { title: "March 2020", url: "#" },
    { title: "February 2020", url: "#" },
    { title: "January 2020", url: "#" },
    { title: "November 1999", url: "#" },
    { title: "October 1999", url: "#" },
    { title: "September 1999", url: "#" },
    { title: "August 1999", url: "#" },
    { title: "July 1999", url: "#" },
    { title: "June 1999", url: "#" },
    { title: "May 1999", url: "#" },
    { title: "April 1999", url: "#" },
  ],
  social: [
    { name: "Github", icon: () => <MaterialuiIcons.GitHub /> },
    { name: "Twitter", icon: () => <MaterialuiIcons.Twitter /> },
    { name: "Faceboox", icon: () => <MaterialuiIcons.Facebook /> },
  ],
};

open MaterialuiPropsTypes;

[@react.component]
let make = () => {
  let classes = useStyles();

  <>
    <Materialui.Container maxWidth=MaxWidth.Container.lg>
      <Blog_Header title="Blog" sections />
      <main>
        <Blog_MainFeaturedPost post=mainFeaturedPost />
        <Materialui.Grid container=true spacing=Spacing.Grid._4>
          {Belt.List.map(featuredPosts, post => 
            <Blog_FeaturedPost post />
          )
          ->Belt.List.toArray
          ->React.array}
        </Materialui.Grid>
        <Materialui.Grid container=true spacing=Spacing.Grid._5 className=classes##mainGrid>
          <Blog_Main title="From the firehose" posts />
          <Blog_Sidebar 
            title=sidebar.title
            description=sidebar.description
            archives=sidebar.archives
            social=sidebar.social
          />
        </Materialui.Grid>
      </main>
    </Materialui.Container>
    <Blog_Footer title="Footer" description="Something here to give the footer a purpose!" />
  </>
};